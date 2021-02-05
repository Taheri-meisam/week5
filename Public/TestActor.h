// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestActor.generated.h"

UCLASS()
class WEEK5_API ATestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestActor();
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "My variables")
	UStaticMeshComponent* MyMesh;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "My variables")
		FVector initLocation;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "My variables")
		FVector MoveObj;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "My variables")
		bool bMovable;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "My variables")
		bool bSetable;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
