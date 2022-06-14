// Fill out your copyright notice in the Description page of Project Settings.


#include "Component/BloodVFXNiagaraComponent.h"


// Sets default values for this component's properties
UBloodVFXNiagaraComponent::UBloodVFXNiagaraComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	bAutoActivate = 0;
}


// Called when the game starts
void UBloodVFXNiagaraComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UBloodVFXNiagaraComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UBloodVFXNiagaraComponent::ActiveBloodVFX()
{
	SetActive(true);
}