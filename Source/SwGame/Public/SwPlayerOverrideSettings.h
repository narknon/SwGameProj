#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SwPlayerOverrideSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, GlobalUserConfig, Config=Game)
class SWGAME_API USwPlayerOverrideSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    USwPlayerOverrideSettings();
};

