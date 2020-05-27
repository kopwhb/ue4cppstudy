// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ue4cppHUD.generated.h"

UCLASS()
class Aue4cppHUD : public AHUD
{
	GENERATED_BODY()

public:
	Aue4cppHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

