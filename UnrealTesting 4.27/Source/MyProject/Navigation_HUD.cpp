// Fill out your copyright notice in the Description page of Project Settings.

#include "Navigation_HUD.h"
#include "Math/TransformNonVectorized.h"
#include "Compass_HUD.h"

void UNavigation_HUD::setCompassWidget(UCompass_HUD* compassWidget)
{
	m_compassWidget = compassWidget;

	/*m_compassWidget->setWaypoints(&g_Waypoints);*/
}
