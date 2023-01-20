// Fill out your copyright notice in the Description page of Project Settings.

#include "Compass_HUD.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/Image.h"
#include "Camera/CameraComponent.h"
#include "Math/Vector.h"
#include "Kismet/KismetMathLibrary.h"
#include "Math/Rotator.h"
#include "Math/Vector2D.h"
#include "Components/PanelWidget.h"

void UCompass_HUD::RemoveWaypoint(FWaypoint waypoint)
{
	for (int i = 0; i < WaypointMarkers.Num(); i++)
	{
		if (WaypointMarkers[i].Waypoint.OwningActor == waypoint.OwningActor)
		{
			WaypointMarkers[i].CanvasSlot->SetPosition({ 0, -200 });
			WaypointMarkers.RemoveAt(i);
			return;
		}
	}
}

void UCompass_HUD::NativeOnInitialized()
{
	UUserWidget::NativeOnInitialized();

	if (!Points)
	{
		UE_LOG(LogTemp, Error, TEXT("You haven't given the COMPASS HUD a reference to the character's camera!"));
	}
}

void UCompass_HUD::NativeTick(const FGeometry& myGeometry, float inDeltaTime)
{
	UUserWidget::NativeTick(myGeometry, inDeltaTime);

	if (!FollowCamera || !Points)
	{
		return;
	}

	SetPointsDirection();

	for (int i = 0; i < WaypointMarkers.Num(); i++)
	{
		SetMarkerPosition(WaypointMarkers[i]);
	}
}

void UCompass_HUD::SetPointsDirection()
{
	float followCameraZAxisRotation = FollowCamera->GetComponentTransform().GetRotation().Euler().Z;
	float canvasXAxisPosition = followCameraZAxisRotation * -10 - 2700;

	if (Points)
	{
		Points->SetPosition({ canvasXAxisPosition, 0 });
	}
}

void UCompass_HUD::SetMarkerPosition(FWaypointMarker& waypointMarker)
{
	FVector cameraPosition = FollowCamera->GetComponentTransform().GetLocation();
	FVector waypointPosition = waypointMarker.Waypoint.OwningActor->GetTransform().GetLocation();
	FVector cameraToWaypointRotation =
		UKismetMathLibrary::FindLookAtRotation(waypointPosition, cameraPosition).Vector().GetSafeNormal();
	FVector cameraForwardVector = FollowCamera->GetComponentTransform().GetRotation().GetForwardVector();

	bool isMarkerVisible =
		CheckIfMarkerBehind(cameraToWaypointRotation, cameraForwardVector);

	if (isMarkerVisible)
	{
		FVector cameraRightVector = FollowCamera->GetComponentTransform().GetRotation().GetRightVector();


		float x = FVector::DotProduct(cameraRightVector, cameraToWaypointRotation);
		float y = FVector::DotProduct(cameraForwardVector, cameraToWaypointRotation);

		float markerXPosition = (x / y) * 700;
		waypointMarker.CanvasSlot->SetPosition({ markerXPosition, -62.0});
	}
	else
	{
		waypointMarker.CanvasSlot->SetPosition({ 0, -200.0 });
	}
}

bool UCompass_HUD::CheckIfMarkerBehind(FVector cameraToWaypointVector, FVector cameraForwardVector)
{

	float dotProduct = 
		FVector::DotProduct(
			cameraToWaypointVector.GetSafeNormal(),
			cameraForwardVector.GetSafeNormal()
		);

	float degreesToWaypoint = UKismetMathLibrary::DegAcos(dotProduct);

	return degreesToWaypoint > 140;
}
