// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharTemp.h"

// Sets default values
AMyCharTemp::AMyCharTemp()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

// Called when the game starts or when spawned
void AMyCharTemp::BeginPlay()
{
	Super::BeginPlay();
	//AMyCharTemp::inTemplate<int>* obj1 = nullptr;
	//obj1->calc(200, 300);
}

// Called every frame
void AMyCharTemp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharTemp::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

