// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModeSC.h"

#include "CCube.h"
#include "CPlayerController.h"

AGameModeSC::AGameModeSC()
{
	PlayerControllerClass = ACPlayerController::StaticClass();
	DefaultPawnClass = ACCube::StaticClass();
}
