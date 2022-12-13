// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "Compass_HUD.generated.h"

/**
 * Compass blueprint.
 */
UCLASS(Blueprintable)
class MYPROJECT_API UCompass_HUD : public UUserWidget
{
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UImage*> markers = TArray<UImage*>();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UImage* needle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UImage* points;

private:
	GENERATED_BODY()
};
