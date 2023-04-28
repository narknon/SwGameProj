#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "EnumSettingsData.h"
#include "SwCombatEnumSettings.generated.h"

UCLASS(Blueprintable)
class USwCombatEnumSettings : public UDeveloperSettings {
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

