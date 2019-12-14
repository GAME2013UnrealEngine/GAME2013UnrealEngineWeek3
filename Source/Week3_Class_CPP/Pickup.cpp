// Fill out your copyright notice in the Description page of Project Settings.


#include "Pickup.h"

// Sets default values
APickup::APickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APickup::BeginPlay()
{
	Super::BeginPlay();

	//FString : modifiable, usual string
	//FName : unique, can not be modified, fast for searching with hash key, map
	//FText : for localization, display for user, 

	FString myStr(TEXT("Health: "));
	//UE_LOG(LogTemp, Log, TEXT("Hello World"));
	UE_LOG(LogTemp, Warning, TEXT("%s, %d"), *myStr, Health);

	MyFirstEvent();

	bool dummyReturnvalue = true;
	MyFirstFunction(dummyReturnvalue);

	//GetNameSafe(this);
	//GetActorLocation();
	
}

// Called every frame
void APickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FString str = FString::Printf(TEXT("Health: %d"), Health);
	
	GEngine->AddOnScreenDebugMessage(123, 1.f, FColor::Red, str);
}

