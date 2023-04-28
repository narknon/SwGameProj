#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "RsHeroGlobalSettings.generated.h"

class URsHeroStateModifierDefinition;

UCLASS(Blueprintable)
class URsHeroGlobalSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath RsHeroFlagSetDefinition;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath DefaultSyncHeroStateModifierAssetRef;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<URsHeroStateModifierDefinition> NoExtCancelRef;
    
public:
    URsHeroGlobalSettings();
};

