#include "RandomRotator.h"

URandomRotator::URandomRotator()
{

}

void URandomRotator::BeginPlay()
{
	Super::BeginPlay();
}

void URandomRotator::RandomlyRotate()
{
	FVector randomDirection = FMath::VRand();
	FQuat randomRotation = randomDirection.ToOrientationQuat();

	// Randomly roll cube as well for some extra random-ness
	auto rotator = randomRotation.Rotator();
	rotator.Roll = FMath::FRandRange(0.f, 360.f);
	randomRotation = randomRotation.MakeFromRotator(rotator);

	GetAttachParent()->SetWorldRotation(randomRotation);
}