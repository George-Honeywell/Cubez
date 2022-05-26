// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"

// Additional Includes
#include "Camera/CameraComponent.h"
#include "GameFramework/Actor.h"

#include "CubezGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class CUBEZ_API ACubezGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	UCameraComponent* mainCamera;

	virtual void StartPlay() override;
	
};
