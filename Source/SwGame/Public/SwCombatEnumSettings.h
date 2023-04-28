#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "EnumSettingsData.h"
#include "SwCombatEnumSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class SWGAME_API USwCombatEnumSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FEnumSettingsData ReactionEnums;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FEnumSettingsData DefenseEnums;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FEnumSettingsData ProjectileEnums;
    
public:
    USwCombatEnumSettings();
};

