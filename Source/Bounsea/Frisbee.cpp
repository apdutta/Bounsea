// Fill out your copyright notice in the Description page of Project Settings.


#include "Frisbee.h"

// Sets default values
AFrisbee::AFrisbee()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFrisbee::BeginPlay()
{
    Super::BeginPlay();

}

// Called every frame
void AFrisbee::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Get physics component and add force vector to propel it on the x-axis
    UPrimitiveComponent* physics = FindComponentByClass<UPrimitiveComponent>();
    if (physics)
    {
        FVector force = FVector(1, 0, 0) * speedScale; // change magic number
        physics->SetPhysicsLinearVelocity(force);
    }
    else
        UE_LOG(LogTemp, Error, TEXT("Physics component not found on frisbee"));

    //FRotator rotate = FRotator(1, 0, 0);
    //AddActorLocalRotation(rotate);
}