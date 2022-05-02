// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CMapWorld.generated.h"

UENUM(BlueprintType)
enum class RotateDirections : uint8
{
	UP=0 UMETA(DisplayName = "Up"),
	DOWN=1 UMETA(DisplayName = "Down"),
	LEFT=2 UMETA(DisplayName = "Left"),
	RIGHT=3 UMETA(DisplayName = "Right")
};

UCLASS()
class SCAPECUBE_API ACMapWorld : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACMapWorld();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnyWhere,BlueprintReadOnly,Category="Component")
	UStaticMeshComponent* StaticMeshComponent;

	FTimerHandle F_TimerHandle;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void StartRotateMap(const RotateDirections EDir);

private:

	void RotateMap(const FRotator NewRotation);
};
