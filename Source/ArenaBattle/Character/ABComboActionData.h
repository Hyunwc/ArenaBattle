// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ABComboActionData.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API UABComboActionData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UABComboActionData();

	UPROPERTY(EditAnywhere, Category = Name)
	FString MontageSectionNamePrefix; // 몽타주 섹션 이름

	UPROPERTY(EditAnywhere, Category = Name)
	uint8 MaxComboCount; // 몇개의 콤보가 있는지?

	UPROPERTY(EditAnywhere, Category = Name)
	float FrameRate;

	UPROPERTY(EditAnywhere, Category = ComboData)
	TArray<float> EffectiveFrameCount;
	
};
