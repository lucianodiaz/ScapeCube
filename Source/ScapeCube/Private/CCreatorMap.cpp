// Fill out your copyright notice in the Description page of Project Settings.


#include "CCreatorMap.h"

#include "Math/TransformCalculus3D.h"

// Sets default values
ACCreatorMap::ACCreatorMap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

	InstancedStaticMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Component"));
	RootComponent = InstancedStaticMeshComponent;
	XCube = 2;
	YCube = 2;
	XYCube = XCube;
	bIsBlockXY = false;
}

void ACCreatorMap::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	if(bIsBlockXY)
	{
		SetXY();
	}
	CreateLevelBounds(XCube,YCube);
}


void ACCreatorMap::CreateLevelBounds(const int& X, const int& Y)
{
	if(Cubes  == nullptr)
	{
		return;
	}
	float PosX = 0,PosY = 0;

	InstancedStaticMeshComponent->ClearInstances();
	RegisterAllComponents();
	/*for(int i=0; i<Y;i++)
	{
		PosY = i;
		for(int j= 0; j<X;j++)
		{
			PosX = j;
			InstancedStaticMeshComponent->SetStaticMesh(Cubes);
			FVector Position;
			FRotator Rotator = FRotator(0,0,0);
			FVector Scale = FVector(1,1,1);
			
			

			//Make Position for every Cube
			Position.X = PosX * OffsetCube + GetActorLocation().X;
			Position.Y = PosY * OffsetCube + GetActorLocation().Y;
			Position.Z = GetActorLocation().Z;
			
			FTransform Transform = FTransform(Rotator,Position,Scale);
			InstancedStaticMeshComponent->AddInstance(Transform);
		}
	}*/
	//draw only bound cubes
	for(int i = 0;i<X;i++)
	{
		//draw Cubes on X
		PosX = i;
		InstancedStaticMeshComponent->SetStaticMesh(Cubes);
		FVector Position;
		FRotator Rotator = FRotator(0,0,0);
		FVector Scale = FVector(1,1,1);

		//Make Position for every Cube in X
		Position.X = PosX * OffsetCube + GetActorLocation().X;
		Position.Y = GetActorLocation().Y;
		Position.Z = GetActorLocation().Z;
		FTransform Transform = FTransform(Rotator,Position,Scale);
		InstancedStaticMeshComponent->AddInstance(Transform);
	}
	for(int i=0;i<Y;i++)
	{
		PosY = i;
		InstancedStaticMeshComponent->SetStaticMesh(Cubes);
		FVector Position;
		FRotator Rotator = FRotator(0,0,0);
		FVector Scale = FVector(1,1,1);

		//Make Position for every Cube in Y
		Position.X = GetActorLocation().X;
		Position.Y =  PosY * OffsetCube +GetActorLocation().Y;
		Position.Z = GetActorLocation().Z;
		FTransform Transform = FTransform(Rotator,Position,Scale);
		InstancedStaticMeshComponent->AddInstance(Transform);
	}
	//Create cubes in Y Mirror
	for(int i=Y;i>0;i--)
	{
		int LimitY = i;
		int XPosition = X -1;
		InstancedStaticMeshComponent->SetStaticMesh(Cubes);
		FVector Position;
		FRotator Rotator = FRotator(0,0,0);
		FVector Scale = FVector(1,1,1);

		//Make Position for every Cube in Y
		Position.X =  XPosition * OffsetCube +GetActorLocation().X;
		Position.Y =  LimitY * OffsetCube +GetActorLocation().Y;
		Position.Z = GetActorLocation().Z;
		FTransform Transform = FTransform(Rotator,Position,Scale);
		InstancedStaticMeshComponent->AddInstance(Transform);
	}

	//CreateCube in X Mirror
	for(int i=X;i>0;i--)
	{
		int LimitX = i-1;
		int YPosition = Y;
		InstancedStaticMeshComponent->SetStaticMesh(Cubes);
		FVector Position;
		FRotator Rotator = FRotator(0,0,0);
		FVector Scale = FVector(1,1,1);

		//Make Position for every Cube in Y
		Position.X = LimitX * OffsetCube + GetActorLocation().X;
		Position.Y = YPosition * OffsetCube + GetActorLocation().Y;
		Position.Z = GetActorLocation().Z;
		FTransform Transform = FTransform(Rotator,Position,Scale);
		InstancedStaticMeshComponent->AddInstance(Transform);
	}
}

void ACCreatorMap::SetXY()
{
	YCube = XCube = XYCube;
}

// // Called when the game starts or when spawned
// void ACCreatorMap::BeginPlay()
// {
// 	Super::BeginPlay();
// 	
// }
//
// // Called every frame
// void ACCreatorMap::Tick(float DeltaTime)
// {
// 	Super::Tick(DeltaTime);
//
// }

