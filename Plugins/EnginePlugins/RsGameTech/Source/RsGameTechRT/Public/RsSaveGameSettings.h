#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "RsSaveGameSettings.generated.h"

UCLASS(Blueprintable)
class URsSaveGameSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SaveSlotCount;
    
    URsSaveGameSettings();
};

