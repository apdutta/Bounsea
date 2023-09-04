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
    respawnLocation = FVector(-2800, 500, 745);
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
    FRotator rotate = FRotator(0, 5, 0);
    AddActorLocalRotation(rotate);

    // Frisbee respawn logic
    --respawnTimer;
    UE_LOG(LogTemp, Warning, TEXT("Timer: %f"), respawnTimer);
    RespawnFrisbee();
}

void AFrisbee::RespawnFrisbee()
{
    if (respawnTimer <= 0)
    {
        respawnTimer = 2500.0f;
        UE_LOG(LogTemp, Warning, TEXT("Respawn condition met!"));
        SetActorLocation(respawnLocation); // Reset the frisbee's position    
    }
}