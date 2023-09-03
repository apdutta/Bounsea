// Fill out your copyright notice in the Description page of Project Settings.


#include "Sanddollar.h"

// Sets default values
ASanddollar::ASanddollar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASanddollar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASanddollar::Tick(float DeltaTime)
{
	FRotator rotation = FRotator(0, 1, 0);

	AddActorLocalRotation(rotation);

}

