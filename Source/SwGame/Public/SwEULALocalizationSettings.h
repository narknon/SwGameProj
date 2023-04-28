#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "CountryCodeToOverride.h"
#include "SwEULALocalizationSettings.generated.h"

class UDataTable;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class SWGAME_API USwEULALocalizationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> SoftEULALocalizationTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCountryCodeToOverride> EULAOverrideCountries;
    
    USwEULALocalizationSettings();
};

