// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Navigation_HUD.generated.h"

class UCompass_HUD;
struct FTransform;

//struct Waypoint
//{
//	FTransform Transform;
//	FColor MarkerColor;
//};

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

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//TArray<Waypoint> g_Waypoints = TArray<Waypoint>();

	void setCompassWidget(UCompass_HUD* compassWidget);

private:
	UCompass_HUD* m_compassWidget = nullptr;
};