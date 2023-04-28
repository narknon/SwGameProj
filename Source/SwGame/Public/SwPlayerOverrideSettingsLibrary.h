#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "RsBitfield_HeroLoadoutFlags.h"
#include "RsBitfield_HeroUpgradeFlags.h"
#include "SwPlayerOverrideSettingsLibrary.generated.h"

UCLASS(Blueprintable)
class USwPlayerOverrideSettingsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USwPlayerOverrideSettingsLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer GetOverrideHeroUpgradeTags();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRsBitfield_HeroUpgradeFlags GetOverrideHeroUpgradeFlags();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRsBitfield_HeroLoadoutFlags GetOverrideHeroLoadoutFlags();
    
};

