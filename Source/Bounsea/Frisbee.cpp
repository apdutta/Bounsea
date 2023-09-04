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

    // Start the respawn timer when the game starts
    GetWorld()->GetTimerManager().SetTimer(respawnTimerHandle, this, &AFrisbee::RespawnFrisbee, RespawnDelay, false);
}

// Called every frame
void AFrisbee::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Get physics component and propel it on the x-axis
    UPrimitiveComponent* physics = FindComponentByClass<UPrimitiveComponent>();
    if (physics)
    {
        FVector force = FVector(1, 0, 0) * speedScale;
        physics->SetPhysicsLinearVelocity(force);
    }

    // Rotate the frisbee
    FRotator rotate = FRotator(0, 0, 5);
    AddActorLocalRotation(rotate);
}

void AFrisbee::RespawnFrisbee()
{
    // Reset the frisbee's position
    SetActorLocation(respawnLocation);

    // Start the respawn timer again
    GetWorld()->GetTimerManager().SetTimer(respawnTimerHandle, this, &AFrisbee::RespawnFrisbee, RespawnDelay, false);
}