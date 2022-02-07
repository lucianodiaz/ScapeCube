// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameFramework/Actor.h"
#include "CCreatorMap.generated.h"

UENUM()
enum EMap
{
	Map1x6 UMETA(DisplayName = "Map1x6"),
	Map2x6 UMETA(DisplayName = "Map2x6"),
	Map3x6 UMETA(DisplayName = "Map3x6"),
	Map4x6 UMETA(DisplayName = "Map4x6"),
	Map5x6 UMETA(DisplayName = "Map5x6"),
	Map6x6 UMETA(DisplayName = "Map6x6")
};
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
	
	/* Build a rectangle/square map and put one by one every cube */
	virtual void OnConstruction(const FTransform& Transform) override;

	void CreateLevelBounds(const int& X, const int& Y);

	void SetXY();
	
	UPROPERTY(VisibleAnywhere,Category="Components")
	UInstancedStaticMeshComponent* InstancedStaticMeshComponent;

	/*Read Data table for map creator*/
	
	UPROPERTY(EditAnywhere,Category="Creation")
	bool bIsLoadMap = false;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Creation",meta=(editCondition="bIsLoadMap"))
	TEnumAsByte<EMap> Map;

	UPROPERTY(EditAnywhere,Category="Creation",meta=(editCondition="bIsLoadMap"))
	UDataTable* LevelDataTable;
	
	/*End Data table map creator*/
	//
public:	
	// Called every frame
	// virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere,Category="Creation",meta =(editCondition="!bIsLoadMap",HideViewOptions="bIsLoadMap"))
	UStaticMesh* Cubes;

	UPROPERTY(EditAnywhere,Category="Creation",meta=(editCondition="!bIsLoadMap",HideViewOptions="bIsLoadMap"))
	bool bIsBlockXY;
	
	UPROPERTY(EditAnywhere,Category="Creation",meta = (ClampMin="2",ClampMax="100",UIMin="1",UIMax="100",editCondition="!bisBlockXY && !bIsLoadMap",HideViewOptions="bIsLoadMap"))
	int XCube;

	UPROPERTY(EditAnywhere,Category="Creation",meta = (ClampMin="2",ClampMax="100",UIMin="1",UIMax="100", editCondition="!bisBlockXY && !bIsLoadMap",HideViewOptions="bIsLoadMap"))
	int YCube;

	UPROPERTY(EditAnywhere,Category="Creation",meta = (ClampMin="2",ClampMax="100",UIMin="1",UIMax="100",editCondition="bIsBlockXY && !bIsLoadMap",HideViewOptions="bIsLoadMap"))
	int XYCube;

};
