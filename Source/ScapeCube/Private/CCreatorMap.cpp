// Fill out your copyright notice in the Description page of Project Settings.


#include "CCreatorMap.h"

// Sets default values
ACCreatorMap::ACCreatorMap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

}

void ACCreatorMap::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	CreateLevelBounds(XCube,YCube);
}

void ACCreatorMap::CreateLevelBounds(float& X, float& Y)
{

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

