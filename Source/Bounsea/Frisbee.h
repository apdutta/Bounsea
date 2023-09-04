// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Frisbee.generated.h"

UCLASS()
class BOUNSEA_API AFrisbee : public AActor
{
	GENERATED_BODY()
	
public:	
	// Variables
	UPROPERTY(EditAnywhere)
	float speedScale = 350.0f;

	UPROPERTY(EditAnywhere)
	FVector respawnLocation = FVector(-2800, 500, 745);

	UPROPERTY(EditAnywhere)
	float respawnTimer = 2500.0;

	//FTransform objectTransform;
	//FVector translation;

	// Sets default values for this actor's properties
	AFrisbee();

	void RespawnFrisbee();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
