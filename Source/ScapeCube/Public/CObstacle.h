// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CObstacle.generated.h"

class UBoxComponent;
UCLASS()
class SCAPECUBE_API ACObstacle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACObstacle();

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category="Component")
	UBoxComponent* BoxComponent;
	
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category="Component")
	UStaticMeshComponent* StaticMeshComponent;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Creation")
	FName NameObstacle;
// 	// Called every frame
// 	virtual void Tick(float DeltaTime) override;

};
