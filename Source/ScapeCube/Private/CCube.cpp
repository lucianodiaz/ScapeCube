// Fill out your copyright notice in the Description page of Project Settings.


#include "CCube.h"

#include "DrawDebugHelpers.h"

// Sets default values
ACCube::ACCube()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));

	RootComponent = MeshComponent;

	bIsMoving = false;

	MoveTo = GetActorLocation();
}

// Called when the game starts or when spawned
void ACCube::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACCube::Up()
{
	MoveCube(1,true);
	
}

void ACCube::Right()
{
	MoveCube(1,false);
}

void ACCube::Down()
{
	MoveCube(-1,true);
}

void ACCube::Left()
{
	MoveCube(-1,false);
}

void ACCube::MoveCube(int Direction, bool UpWay)
{
	if(bIsMoving)
	{
		return;
	}
	bIsMoving = true;
	const FVector Start = GetActorLocation();
	FHitResult HitResult;

	float OffsetX {50};
	float OffsetY {50};
	
	if(UpWay)
	{
		//arriba
		if(Direction >= 0)
		{
			SetActorRotation(FRotator(0,0,0));
			OffsetX = 50;
			OffsetY = 0;
		}
		else
		{
			OffsetX = -50;
			OffsetY = 0;
			SetActorRotation(FRotator(0,180,0));
		}
		const FVector End = Start + ((GetActorForwardVector()) *4000);
		//abajo
		GetWorld()->LineTraceSingleByChannel(HitResult, Start, End,
											ECollisionChannel::ECC_Visibility);

		DrawDebugLine(GetWorld(), Start, End,FColor::Red,false,3);
	}
	else
	{
		
		//derecha
		if(Direction >= 0)
		{
			OffsetX = 0;
			OffsetY = 60;
			SetActorRotation(FRotator(0,90,0));
		}
		else //izquierda
		{
			OffsetX = 0;
			OffsetY = -60;
			SetActorRotation(FRotator(0,-90,0));
		}
		const FVector End = Start + ((GetActorForwardVector()) *4000);
		//const FVector End = Start + ((GetActorRightVector()*Direction) *4000);
		GetWorld()->LineTraceSingleByChannel(HitResult, Start, End,
											ECollisionChannel::ECC_Visibility);

		DrawDebugLine(GetWorld(), Start, End,FColor::Red,false,3);
	}
	if(HitResult.bBlockingHit)
	{
		//UE_LOG(LogTemp,Log,TEXT("Location : %s"),*HitResult.ImpactPoint.ToString());
		FVector NewLocation; //= HitResult.Location;
		NewLocation.X = HitResult.Location.X - OffsetX;
		NewLocation.Y = HitResult.Location.Y - OffsetY;
		NewLocation.Z = GetActorLocation().Z;
		MoveTo = NewLocation;
	}
	
}

bool ACCube::IsArrival(const FVector& M)
{
	/*REFACTOR*/
	
	bool bIsArrivalX;
	bool bIsArrivalY;
	const float Distance = (MoveTo - GetActorLocation()).Size();

	UE_LOG(LogTemp,Log,TEXT("Distance: %f"),Distance);
	if( Distance <= 20)
	{
		bIsArrivalX = true;
	}
	else
	{
		bIsArrivalX = false;
	}
	if(GetActorLocation().Y >= M.Y || Distance <= 20)
	{
		bIsArrivalY = true;
	}
	else
	{
		bIsArrivalY = false;
	}

	if(bIsArrivalY && bIsArrivalX)
	{
		SetActorLocation(FVector(M.X,M.Y,GetActorLocation().Z));
	}
	return bIsArrivalY && bIsArrivalX;
}

// Called every frame
void ACCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if(bIsMoving)
	{
		const FVector Current = GetActorLocation();
		const FVector Target = MoveTo;
		const FVector LerpVector = FMath::VInterpTo(Current,Target,DeltaTime,InterSpeed);
		SetActorLocation(FVector(LerpVector));
		if(IsArrival(MoveTo))
		{
			bIsMoving = false;
		}
	}
}

// Called to bind functionality to input
void ACCube::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Up",IE_Pressed,this,&ACCube::Up);
	
	PlayerInputComponent->BindAction("Right",IE_Pressed,this,&ACCube::Right);

	PlayerInputComponent->BindAction("Down",IE_Pressed,this,&ACCube::Down);

	PlayerInputComponent->BindAction("Left",IE_Pressed,this,&ACCube::Left);
}

