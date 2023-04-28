#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "RsMissionObjectiveSettings.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class URsMissionObjectiveSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> MissionObjectiveDataTablePtr;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> RumorDataTablePtr;
    
    URsMissionObjectiveSettings();
};

