// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NiagaraComponent.h"
#include "NiagaraDataInterfaceExport.h"
#include "Interface/BloodVFXInterface.h"
#include "BloodVFXNiagaraComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BLOODVFX_API UBloodVFXNiagaraComponent : public UNiagaraComponent, public IBloodVFXInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UBloodVFXNiagaraComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//Interface
	virtual void ActiveBloodVFX() override;
};
