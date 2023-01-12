// Fill out your copyright notice in the Description page of Project Settings.

#include "Navigation_HUD.h"
#include "Math/TransformNonVectorized.h"
#include "Camera/CameraComponent.h"
#include "Compass_HUD.h"
#include "Math/TransformNonVectorized.h"

void UNavigation_HUD::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	UUserWidget::NativeTick(MyGeometry, InDeltaTime);

	setWidgetWaypoints();
}

void UNavigation_HUD::setWidgetWaypoints()
{
	if (isCompassEnabled)
	{
		if (!g_CompassWidget->g_FollowCamera)
		{
			g_CompassWidget->g_FollowCamera = g_FollowCamera;
		}

		g_CompassWidget->g_Waypoints = g_Waypoints;
	}
}
