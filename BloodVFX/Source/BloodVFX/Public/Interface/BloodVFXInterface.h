// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BloodVFXInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(Blueprintable, MinimalAPI, meta = (CannotImplementInterfaceInBlueprint))
class UBloodVFXInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BLOODVFX_API IBloodVFXInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, Category = Vehicle)
	virtual void ActiveBloodVFX() = 0;
};
