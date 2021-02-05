// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor.h"

// Sets default values
ATestActor::ATestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ustatic Mesh"));
	initLocation = FVector(0.0f, 0.0f, 0.0f);
}

// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	if (bSetable) {
		SetActorLocation(initLocation);
	}
	
}

// Called every frame
void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bMovable) {
		AddActorLocalOffset(MoveObj,false,nullptr);
		//AddActorLocalOffset(MoveObj);
	}

}

