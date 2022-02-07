// Fill out your copyright notice in the Description page of Project Settings.


#include "CObstacle.h"

#include "Components/BoxComponent.h"

// Sets default values
ACObstacle::ACObstacle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	RootComponent = BoxComponent;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	StaticMeshComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ACObstacle::BeginPlay()
{
	Super::BeginPlay();
	
}

// // Called every frame
// void AEAObstacle::Tick(float DeltaTime)
// {
// 	Super::Tick(DeltaTime);
//
// }

