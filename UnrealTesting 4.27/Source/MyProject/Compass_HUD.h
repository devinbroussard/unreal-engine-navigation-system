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
	UCanvasPanelSlot* g_OriginalMarker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FWaypointMarker> g_WaypointMarkers = TArray<FWaypointMarker>();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UImage* g_Needle = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCanvasPanelSlot* g_Points = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCameraComponent* g_FollowCamera = nullptr;

	UFUNCTION(BlueprintCallable)
	void RemoveWaypoint(FWaypoint waypoint);

	void NativeOnInitialized() override;

	void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	void SetPointsDirection();

	void SetMarkerPosition(FWaypointMarker &waypointMarker);

private:
	bool CheckIfMarkerBehind(FVector cameraToWaypointVector, FVector cameraForwardVector);
};
