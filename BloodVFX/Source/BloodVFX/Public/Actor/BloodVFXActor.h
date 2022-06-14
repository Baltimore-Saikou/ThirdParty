// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NiagaraDataInterfaceExport.h"
#include "GameFramework/Actor.h"
#include "BloodVFXActor.generated.h"

class UBloodVFXNiagaraComponent;

UCLASS()
class BLOODVFX_API ABloodVFXActor : public AActor, public INiagaraParticleCallbackHandler
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABloodVFXActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UBloodVFXNiagaraComponent* BloodVFXComponent;
};
