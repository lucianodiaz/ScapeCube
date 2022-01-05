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

	void CreateLevelBounds(const int& X, const int& Y);

	void SetXY();
	 UPROPERTY(VisibleAnywhere,Category="Components")
	 UInstancedStaticMeshComponent* InstancedStaticMeshComponent;
	//
public:	
	// Called every frame
	// virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere,Category="Creation")
	UStaticMesh* Cubes;

	UPROPERTY(EditAnywhere,Category="Creation",meta = (ClampMin="2",ClampMax="100",UIMin="1",UIMax="100",editCondition="!bisBlockXY"))
	int XCube;

	UPROPERTY(EditAnywhere,Category="Creation",meta = (ClampMin="2",ClampMax="100",UIMin="1",UIMax="100", editCondition="!bisBlockXY"))
	int YCube;

	UPROPERTY(EditAnywhere,Category="Creation",meta = (ClampMin="2",ClampMax="100",UIMin="1",UIMax="100",editCondition="bIsBlockXY"))
	int XYCube;
	UPROPERTY(EditAnywhere,Category="Creation")
	bool bIsBlockXY;
};
