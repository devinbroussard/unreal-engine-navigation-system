// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Compass_HUD.generated.h"

class UImage;
class UCanvasPanelSlot;
class UCameraComponent;
class Waypoint;

/**
 * Compass blueprint.
 */
UCLASS(Blueprintable)
class MYPROJECT_API UCompass_HUD : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UImage* g_OriginalMarker;

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

	void RefreshMarkerPositions();
	//void RefreshMarkerPosition(Waypoint waypoint);

	//void setWaypoints(TArray<Waypoint>* waypoints);

private:

	UCanvasPanelSlot* GetPointsAsCanvasSlot();

	UCanvasPanelSlot* m_pointsAsCanvasSlot = nullptr;

	/*TArray<Waypoint>* m_waypoints;*/
};
