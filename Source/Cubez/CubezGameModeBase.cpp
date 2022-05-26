// Copyright Epic Games, Inc. All Rights Reserved.


#include "CubezGameModeBase.h"

void ACubezGameModeBase::StartPlay()
{
    Super::StartPlay();

    check(GEngine != nullptr)
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::White, TEXT("[DEBUG] - Using CubezGameModeBase"));

    
}