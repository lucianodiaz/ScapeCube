// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CCube.generated.h"


UCLASS()
class SCAPECUBE_API ACCube : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACCube();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Up();

	void Right();
	
	void Down();
	
	void Left();
	
	void MoveCube(int Direction,bool UpWay);

	bool IsArrival(const FVector& M);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category="Component")
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(EditAnywhere,Category="Gameplay")
	float InterSpeed = 20;
private:
	
	
	
	bool bIsMoving;

	FVector MoveTo;
};
