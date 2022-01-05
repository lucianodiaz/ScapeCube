// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CCreatorMap.generated.h"

UCLASS()
class SCAPECUBE_API ACCreatorMap : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACCreatorMap();

	
	private:
	
	const int OffsetCube = 100;
	
protected:
	// Called when the game starts or when spawned
	// virtual void BeginPlay() override;

	virtual void OnConstruction(const FTransform& Transform) override;

	void CreateLevelBounds(float &X,float&Y);


	// UPROPERTY(VisibleAnywhere,Category="Components")
	// UStaticMeshComponent* MeshComponent;
	//
public:	
	// Called every frame
	// virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere,Category="Creation")
	float XCube;

	UPROPERTY(VisibleAnywhere,Category="Creation")
	float YCube;
};
