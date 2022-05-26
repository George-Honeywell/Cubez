// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePlayer.h"

// Sets default values
AGamePlayer::AGamePlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	PlayerMesh = CreateDefaultSubobject<UStaticMeshComponent>("Player Mesh");
	check(PlayerMesh != nullptr);
	//PlayerMesh->SetupAttachment(CastChecked<USceneComponent, UCapsuleComponent>(GetCapsuleComponent()));
}

// Called when the game starts or when spawned
void AGamePlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGamePlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGamePlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Moveleft", this, &AGamePlayer::MoveLeft);

}

void AGamePlayer::MoveLeft(float value)
{
	FVector dir = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(dir, value);
}

