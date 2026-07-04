// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Throwaway.generated.h"

/**
 * 
 */
UCLASS()
class FINAL_API UThrowaway : public UObject
{
	GENERATED_BODY()
	
};






// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BossAnimInstance.generated.h"

/*
 * Animation instance used by the boss.
 * It stores animation-driving values that can be read inside the Animation Blueprint.
 */
UCLASS()
class FINAL_API UBossAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	// Current movement speed of the boss, used to drive blend spaces / movement states.
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float CurrentSpeed{ 0.0f };

	// Updates the cached movement speed from the owning pawn.
	UFUNCTION(BlueprintCallable)
	void UpdateSpeed();

public:
	// True while the boss is performing its charge behaviour.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsCharging{ false };
};