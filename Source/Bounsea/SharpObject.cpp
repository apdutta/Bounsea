// Fill out your copyright notice in the Description page of Project Settings.


#include "SharpObject.h"

// Sets default values
ASharpObject::ASharpObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASharpObject::BeginPlay()
{
	Super::BeginPlay();
	activated = false;
	
}

// Called every frame
void ASharpObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

