// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/BloodVFXActor.h"

#include "Component/BloodVFXNiagaraComponent.h"


// Sets default values
ABloodVFXActor::ABloodVFXActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BloodVFXComponent = CreateDefaultSubobject<UBloodVFXNiagaraComponent>(TEXT("BloodVFX"));
	SetRootComponent(BloodVFXComponent);
}

// Called when the game starts or when spawned
void ABloodVFXActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABloodVFXActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

