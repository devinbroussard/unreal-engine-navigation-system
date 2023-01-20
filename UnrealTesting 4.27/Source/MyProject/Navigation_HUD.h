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
	AActor* OwningActor;

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
	bool IsCompassEnabled = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCameraComponent* FollowCamera = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FWaypoint> Waypoints = TArray<FWaypoint>();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCompass_HUD* CompassWidget = nullptr;

	void NativeTick(const FGeometry& myGeometry, float inDeltaTime) override;

private:
	void SetWidgetWaypoints();
};