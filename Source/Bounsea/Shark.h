// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Shark.generated.h"

UCLASS()
class BOUNSEA_API AShark : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShark();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
