// Fill out your copyright notice in the Description page of Project Settings.


#include "Shark.h"

// Sets default values
AShark::AShark()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShark::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShark::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FRotator rotate = FRotator(0, 1, 0);
	AddActorLocalRotation(rotate);

}

