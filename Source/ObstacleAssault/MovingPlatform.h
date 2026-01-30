// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Function to move the platform
	void MovePlatform(float DeltaTime);

	// Function to rotate the platform
	void RotatePlatform(float DeltaTime);

	float GetDistanceMoved();

	// Velocity of the platform
	UPROPERTY(EditAnywhere)
	FVector PlatformVelocity = FVector(0.f, 0.f, 0.f);

	// Rotation speed of the platform
	UPROPERTY(EditAnywhere)
	FRotator RotationVelocity = FRotator(0.f, 0.f, 0.f);

	// Starting location of the platform
	FVector StartLocation;

	// Maximum allowed distance to move
	UPROPERTY(EditAnywhere)
	float MaxDistance = 400.f;

	// Distance moved
	UPROPERTY(VisibleAnywhere)
	float DistanceMoved = 0.f;
};
