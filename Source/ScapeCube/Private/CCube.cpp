// Fill out your copyright notice in the Description page of Project Settings.


#include "CCube.h"

#include "DrawDebugHelpers.h"

// Sets default values
ACCube::ACCube()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));

	RootComponent = MeshComponent;

	
}

// Called when the game starts or when spawned
void ACCube::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACCube::Up(float AxisValue)
{
	if(AxisValue == 0)
	{
		return;
	}
	FVector Start = GetActorLocation();
	FHitResult HitResult;
	if(AxisValue < 0)
	{
	
		FVector End = Start + ((GetActorForwardVector()*-1) *4000);
		GetWorld()->LineTraceSingleByChannel(HitResult, Start, End,
		                                     ECollisionChannel::ECC_Visibility);

		DrawDebugLine(GetWorld(), Start, End,FColor::Red,false,3);
		
	}
	else
	{
		FVector End = Start + (GetActorForwardVector() *4000);
		GetWorld()->LineTraceSingleByChannel(HitResult, Start, End,
											ECollisionChannel::ECC_Visibility);

		DrawDebugLine(GetWorld(), Start, End,FColor::Red,false,3);
	}
	if(HitResult.bBlockingHit)
	{
		UE_LOG(LogTemp,Log,TEXT("Location : %s"),*HitResult.ImpactPoint.ToString());
	}
}

void ACCube::Right(float AxisValue)
{
	if(AxisValue == 0)
	{
		return;
	}
	FVector Start = GetActorLocation();
	FHitResult HitResult;
	if(AxisValue < 0)
	{
		
		FVector End = Start + ((GetActorRightVector()*-1) *4000);
		GetWorld()->LineTraceSingleByChannel(HitResult, Start, End,
											ECollisionChannel::ECC_Visibility);

		DrawDebugLine(GetWorld(), Start, End,FColor::Red,false,3);
	}
	else
	{
		
		FVector End = Start + (GetActorRightVector() *4000);
		
		GetWorld()->LineTraceSingleByChannel(HitResult, Start, End,
											ECollisionChannel::ECC_Visibility);

		DrawDebugLine(GetWorld(), Start, End,FColor::Red,false,3);
	}
	
	if(HitResult.bBlockingHit)
	{
		UE_LOG(LogTemp,Log,TEXT("Location : %s"),*HitResult.ImpactPoint.ToString());
	}
}

// Called every frame
void ACCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACCube::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Forward",this,&ACCube::Up);
	PlayerInputComponent->BindAxis("Right",this,&ACCube::Right);
	
}

