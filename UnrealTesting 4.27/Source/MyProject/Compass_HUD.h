// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Navigation_HUD.h"
#include "Compass_HUD.generated.h"

class UImage;
class UCanvasPanelSlot;
class UCameraComponent;

USTRUCT(BlueprintType)
struct FWaypointMarker
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FWaypoint Waypoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCanvasPanelSlot* CanvasSlot;
};

/**
 * Compass blueprint.
 */
UCLASS(Blueprintable)
class MYPROJECT_API UCompass_HUD : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCanvasPanelSlot* OriginalMarker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FWaypointMarker> WaypointMarkers = TArray<FWaypointMarker>();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCanvasPanelSlot* Points = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCameraComponent* FollowCamera = nullptr;

	/// <summary>
	/// Removes a waypoint marker from the WaypointMarkers array.
	/// </summary>
	UFUNCTION(BlueprintCallable)
	void RemoveWaypoint(FWaypoint waypoint);

	void NativeOnInitialized() override;

	void NativeTick(const FGeometry& myGeometry, float inDeltaTime) override;

	/// <summary>
	/// Sets the direction the player is looking at by moving the points image.
	/// </summary>
	void SetPointsDirection();

	/// <summary>
	/// Sets the position of the given waypoint marker.
	/// </summary>
	/// <param name="waypointMarker">The given waypoint marker.</param>
	void SetMarkerPosition(FWaypointMarker &waypointMarker);

private:
	/// <summary>
	/// Checks to see if the given marker is behind the camera.
	/// </summary>
	/// <param name="cameraToWaypointVector">The direction of the waypoint from the camera.</param>
	/// <param name="cameraForwardVector">The camera's forward facing vector.</param>
	/// <returns></returns>
	bool CheckIfMarkerBehind(FVector cameraToWaypointVector, FVector cameraForwardVector);
};
