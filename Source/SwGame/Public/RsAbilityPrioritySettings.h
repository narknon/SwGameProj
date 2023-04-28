#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "RsAbilityPriorityDataRow.h"
#include "RsAbilityPriorityWeights.h"
#include "RsAbilityPrioritySettings.generated.h"

UCLASS(Blueprintable)
class URsAbilityPrioritySettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath DefaultPriorityTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAbilityPriorityDataRow DefaultPreset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAbilityPriorityDataRow ZTargetPreset;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAbilityPriorityWeights AbilityPriorityMappings[5];
    
    URsAbilityPrioritySettings();
};

