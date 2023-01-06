// Fill out your copyright notice in the Description page of Project Settings.

#include "Compass_HUD.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/Image.h"
#include "Camera/CameraComponent.h"

void UCompass_HUD::NativeOnInitialized()
{
	UUserWidget::NativeOnInitialized();

	if (!g_Points)
	{
		UE_LOG(LogTemp, Error, TEXT("You haven't given the COMPASS HUD a reference to the character's camera!"));
	}
}

void UCompass_HUD::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	UUserWidget::NativeTick(MyGeometry, InDeltaTime);

	if (!g_FollowCamera || !g_Needle || !g_Points)
	{
		return;
	}

	SetPointsDirection();
}

void UCompass_HUD::SetPointsDirection()
{
	float followCameraZAxisRotation = g_FollowCamera->GetComponentTransform().GetRotation().Euler().Z;
	float canvasXAxisPosition = followCameraZAxisRotation * -10 - 2700;

	if (g_Points)
	{
		g_Points->SetPosition({ canvasXAxisPosition, 0 });
	}
}

void UCompass_HUD::RefreshMarkerPositions()
{
	for(int i = 0; i < m_waypoints->Num(); i++)
	{
		RefreshMarkerPosition((*m_waypoints)[i]);
	}
}

void UCompass_HUD::RefreshMarkerPosition(FWaypoint waypoint)
{
}

void UCompass_HUD::setWaypoints(TArray<FWaypoint>* waypoints)
{
	m_waypoints = waypoints;
}
