// Copyright Epic Games, Inc. All Rights Reserved.

#include "Kart_SIDEGameMode.h"
#include "Kart_SIDEPawn.h"
#include "Kart_SIDEHud.h"

AKart_SIDEGameMode::AKart_SIDEGameMode()
{
	DefaultPawnClass = AKart_SIDEPawn::StaticClass();
	HUDClass = AKart_SIDEHud::StaticClass();
}
