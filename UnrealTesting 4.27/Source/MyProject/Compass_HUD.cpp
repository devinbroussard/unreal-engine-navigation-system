// Fill out your copyright notice in the Description page of Project Settings.

#include "Compass_HUD.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/Image.h"
#include "Camera/CameraComponent.h"

void UCompass_HUD::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	UUserWidget::NativeTick(MyGeometry, InDeltaTime);

	SetPointsDirection();
}

void UCompass_HUD::SetPointsDirection()
{
	float followCameraZAxisRotation = g_FollowCamera->GetComponentTransform().GetRotation().Z;
	float canvasXAxisPosition = followCameraZAxisRotation * -10 - 2700;

	GetPointsAsCanvasSlot()->SetPosition({ canvasXAxisPosition, 0 });
}

UCanvasPanelSlot* UCompass_HUD::GetPointsAsCanvasSlot()
{
	if (m_pointsAsCanvasSlot)
	{
		return m_pointsAsCanvasSlot;
	}

	return m_pointsAsCanvasSlot = Cast<UCanvasPanelSlot>(g_Points); 
}
