// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharTemp.generated.h"

UCLASS()
class WEEK5_API AMyCharTemp : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharTemp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	FVector newvec;

	template<class T>
	class inTemplate {
	public :
		T x;
		T y;
		void calc(T,T);
	};

};
// https://t4tutorials.com/inline-function-in-c/
//https://www.programiz.com/cpp-programming/inline-function

template<class T>
inline void AMyCharTemp::inTemplate<T>::calc(T t1, T t2)
{
	auto myval = t1 + t2;
	FString resVal = FString::FromInt(myval);
	UE_LOG(LogTemp, Error, TEXT("The result value is :%s"), *resVal);
}
