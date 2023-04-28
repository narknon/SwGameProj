#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SwProjectileAccuracyEntry.h"
#include "SwProjectileAccuracyConfig.generated.h"

UCLASS(Blueprintable)
class USwProjectileAccuracyConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwProjectileAccuracyEntry DifficultyLevels[5];
    
    USwProjectileAccuracyConfig();
};

