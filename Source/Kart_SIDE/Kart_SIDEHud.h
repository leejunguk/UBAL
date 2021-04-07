// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "Kart_SIDEHud.generated.h"


UCLASS(config = Game)
class AKart_SIDEHud : public AHUD
{
	GENERATED_BODY()

public:
	AKart_SIDEHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface
};
