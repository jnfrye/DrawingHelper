#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RandomRotator.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CUBEDRAWING_API URandomRotator : public USceneComponent
{
	GENERATED_BODY()

public:	
	URandomRotator();

	UFUNCTION(BlueprintCallable) void RandomlyRotate();

protected:
	virtual void BeginPlay() override;
};
