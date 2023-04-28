#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "RsAbilityWeightClassData.h"
#include "RsAbilityWeightClassSettings.generated.h"

UCLASS(Blueprintable)
class URsAbilityWeightClassSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAbilityWeightClassData WeightClassifications[5];
    
    URsAbilityWeightClassSettings();
};

