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
		// If this waypoint's owner matches the given waypoint's owner...
		if (WaypointMarkers[i].Waypoint.OwningActor == waypoint.OwningActor)
		{
			// Hide the waypoint and remove it from the WaypointMarker array.
			WaypointMarkers[i].CanvasSlot->SetPosition({ 0, -200 });
			WaypointMarkers.RemoveAt(i);
			return;
		}
	}
}

void UCompass_HUD::NativeOnInitialized()
{
	UUserWidget::NativeOnInitialized();

	// Throw an error message if the player doesn't initialize the compass correctly.
	if (!Points)
	{
		UE_LOG(LogTemp, Error, TEXT("You haven't given the COMPASS HUD a reference to the character's camera!"));
	}
}

void UCompass_HUD::NativeTick(const FGeometry& myGeometry, float inDeltaTime)
{
	UUserWidget::NativeTick(myGeometry, inDeltaTime);

	// If the compass isn't initialized correctly, return.
	if (!FollowCamera || !Points)
	{
		return;
	}

	// Sets the direction of the compass points relative to the player.
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

	// Checks to see if the marker is behind the camera before doing calculations...
	bool isMarkerVisible =
		CheckIfMarkerBehind(cameraToWaypointRotation, cameraForwardVector);

	if (isMarkerVisible)
	{
		FVector cameraRightVector = FollowCamera->GetComponentTransform().GetRotation().GetRightVector();


		float rightDotProduct = FVector::DotProduct(cameraRightVector, cameraToWaypointRotation);
		float forwardDotProduct = FVector::DotProduct(cameraForwardVector, cameraToWaypointRotation);

		float markerXPosition = (rightDotProduct / forwardDotProduct) * 700;
		waypointMarker.CanvasSlot->SetPosition({ markerXPosition, -62.0});
	}
	else
	{
		// Hides the waypoint if the marker isn't visible.
		waypointMarker.CanvasSlot->SetPosition({ 0, -200.0 });
	}
}

bool UCompass_HUD::CheckIfMarkerBehind(FVector cameraToWaypointVector, FVector cameraForwardVector)
{
	// Gets the rotation in degrees to the waypoint and returns whether or not it is less than 140 degrees.
	float dotProduct = 
		FVector::DotProduct(
			cameraToWaypointVector.GetSafeNormal(),
			cameraForwardVector.GetSafeNormal()
		);

	float degreesToWaypoint = UKismetMathLibrary::DegAcos(dotProduct);

	return degreesToWaypoint > 140;
}
