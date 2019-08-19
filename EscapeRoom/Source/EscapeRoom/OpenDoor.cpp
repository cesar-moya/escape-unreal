// Copyright Cesar Moya 2019


#include "OpenDoor.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();

	//FQuat newRot = new FQuat()
	//GetOwner()->GetTransform().SetRotation(newRot);
	
	//Find owner actor
	AActor* owner = GetOwner();

	//Create a rotator
	FRotator rotator = FRotator(0.0f, 60.0f, 0.0f);

	//Set Door Rotation
	owner->SetActorRotation(rotator);
}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

