// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Navigation_HUD.generated.h"

class UCompass_HUD;
class UCameraComponent;
struct FTransform;

USTRUCT(BlueprintType)
struct FWaypoint
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform Transform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FColor MarkerColor;
};

/**
 * A wrapper widget for the compass, waypoints, and minimap widgets.
 */
UCLASS()
class MYPROJECT_API UNavigation_HUD : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isCompassEnabled = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool areWaypointsEnabled = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isMinimapEnabled = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCameraComponent* g_FollowCamera = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FWaypoint> g_Waypoints = TArray<FWaypoint>();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCompass_HUD* g_CompassWidget = nullptr;

	void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

private:
	void initWidgets();

	void setWidgetWaypoints();
};