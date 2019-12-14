// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/Engine.h"
#include "Pickup.generated.h"

UCLASS()
class WEEK3_CLASS_CPP_API APickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup();

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	int32 Health = 20;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void MyFirstEvent(); //Doesn't have return type, doesn't have local stack that you can't make local variable

	UFUNCTION(BlueprintNativeEvent)//can be implemented either bluprint or c++
	bool MyFirstFunction(bool& MyReturnValue);
	bool MyFirstFunction_Implementation(bool& MyReturnValue) 
	{ 
		UE_LOG(LogTemp, Log, TEXT("My C++ Function"));
		return false;
	}

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
