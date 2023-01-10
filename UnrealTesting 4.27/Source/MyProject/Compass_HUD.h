// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Navigation_HUD.h"
#include "Compass_HUD.generated.h"

class UImage;
class UCanvasPanelSlot;
class UCameraComponent;

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
	TArray<FWaypoint> g_Waypoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UImage*> g_AssignedMarkers = TArray<UImage*>();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UImage* g_Needle = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCanvasPanelSlot* g_Points = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCameraComponent* g_FollowCamera = nullptr;

	void NativeOnInitialized() override;

	void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	void SetPointsDirection();

	void CreateMarkers();

	void CreateMarker(FWaypoint waypoint);

	void SetMarkerPosition(FWaypoint waypoint, UCanvasPanelSlot* marker);

	void SetMarkerColor(FWaypoint waypoint, UCanvasPanelSlot* marker);
};
