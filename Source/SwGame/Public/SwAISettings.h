#pragma once
#include "CoreMinimal.h"
#include "RsAISettings.h"
#include "SwAISettings.generated.h"

UCLASS(Blueprintable)
class USwAISettings : public URsAISettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    int32 PlayerFightPoints[5];
    
    USwAISettings();
};

