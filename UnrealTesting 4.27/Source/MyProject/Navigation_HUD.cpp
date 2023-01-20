// Fill out your copyright notice in the Description page of Project Settings.

#include "Navigation_HUD.h"
#include "Math/TransformNonVectorized.h"
#include "Camera/CameraComponent.h"
#include "Compass_HUD.h"
#include "Math/TransformNonVectorized.h"

void UNavigation_HUD::NativeTick(const FGeometry& myGeometry, float inDeltaTime)
{
	UUserWidget::NativeTick(myGeometry, inDeltaTime);

	SetWidgetWaypoints();
}

void UNavigation_HUD::SetWidgetWaypoints()
{
	if (IsCompassEnabled)
	{
		if (!CompassWidget->FollowCamera)
		{
			CompassWidget->FollowCamera = FollowCamera;
		}
	}
}
