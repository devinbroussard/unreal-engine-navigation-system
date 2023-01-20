// Fill out your copyright notice in the Description page of Project Settings.

#include "Navigation_HUD.h"
#include "Math/TransformNonVectorized.h"
#include "Camera/CameraComponent.h"
#include "Compass_HUD.h"
#include "Math/TransformNonVectorized.h"

void UNavigation_HUD::NativeTick(const FGeometry& myGeometry, float inDeltaTime)
{
	UUserWidget::NativeTick(myGeometry, inDeltaTime);

	InitializeWidgets();
}

void UNavigation_HUD::InitializeWidgets()
{
	if (IsCompassEnabled)
	{
		if (!CompassWidget->FollowCamera)
		{
			// If the compass component's follow camera hasn't been initialized, initialize it.
			CompassWidget->FollowCamera = FollowCamera;
		}
	}
}
