// Fill out your copyright notice in the Description page of Project Settings.


#include "CMapWorld.h"


// Sets default values
ACMapWorld::ACMapWorld()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));

	RootComponent = StaticMeshComponent;
}

// Called when the game starts or when spawned
void ACMapWorld::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACMapWorld::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACMapWorld::StartRotateMap(const RotateDirections EDir)
{
	const FRotator CurrentRotation = GetActorRotation();
	
	FRotator NewRotation;
	switch (EDir)
	{
	case RotateDirections::UP:
		NewRotation = FRotator(CurrentRotation.Pitch + 90,CurrentRotation.Yaw,CurrentRotation.Roll);
		break;
	case RotateDirections::DOWN:
		
		NewRotation = FRotator(CurrentRotation.Pitch - 90,CurrentRotation.Yaw,CurrentRotation.Roll);
		break;
	case RotateDirections::LEFT:
		
		NewRotation = FRotator(CurrentRotation.Pitch,CurrentRotation.Yaw,CurrentRotation.Roll +90);
		break;
	case RotateDirections::RIGHT:
		NewRotation = FRotator(CurrentRotation.Pitch,CurrentRotation.Yaw,CurrentRotation.Roll -90);
		break;
	}

	GetWorldTimerManager().SetTimer(F_TimerHandle,FTimerDelegate::CreateUObject(this,&ACMapWorld::RotateMap,NewRotation),0.01,true);
}

void ACMapWorld::RotateMap(const FRotator NewRotation)
{
	const FRotator CurrentRotation = GetActorRotation();
	const FRotator LerpRotator = FMath::RInterpConstantTo(CurrentRotation,NewRotation,GetWorldTimerManager().GetTimerElapsed(F_TimerHandle),100);
	
	SetActorRotation(LerpRotator);
	
	const float Difference = FMath::FloorToInt(abs(NewRotation.Roll)) == 90  ? CurrentRotation.Roll - NewRotation.Roll : CurrentRotation.Pitch - NewRotation.Pitch;
	
	if(abs(Difference) == 0)
	{
		GetWorldTimerManager().ClearTimer(F_TimerHandle);
	}
}

