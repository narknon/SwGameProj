#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SwCustomSettingBool.h"
#include "SwCustomSettingFloat.h"
#include "SwCustomSettingInt.h"
#include "SwCustomSettingString.h"
#include "SwCustomUserSettings.generated.h"

UCLASS(Blueprintable)
class USwCustomUserSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwCustomSettingInt> CustomSettingsInt;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwCustomSettingBool> CustomSettingsBool;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwCustomSettingFloat> CustomSettingsFloat;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwCustomSettingString> CustomSettingsString;
    
    USwCustomUserSettings();
};

