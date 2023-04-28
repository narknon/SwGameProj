#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERsHeroBufferFlags.h"
#include "ERsHeroInputFlags.h"
#include "ERsHeroLoadoutFlags.h"
#include "ERsHeroUpgradeFlags.h"
#include "ERsNavState.h"
#include "RsBitfield_HeroBufferFlags.h"
#include "RsBitfield_HeroInputFlags.h"
#include "RsBitfield_HeroLoadoutFlags.h"
#include "RsBitfield_HeroUpgradeFlags.h"
#include "RsBitfield_NavState.h"
#include "RsHeroBlueprintLibrary.generated.h"

class ARsHero;
class UObject;
class URsHeroStateModifierDefinition;

UCLASS(Blueprintable)
class URsHeroBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URsHeroBlueprintLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGamepadCameraYAxisInverted(const UObject* WorldContextObject, bool bInvert);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRsBitfield_NavState MakeFRsBitfield_NavState(TArray<ERsNavState> Flags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRsBitfield_HeroUpgradeFlags MakeFRsBitfield_HeroUpgradeFlags(TArray<ERsHeroUpgradeFlags> Flags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRsBitfield_HeroLoadoutFlags MakeFRsBitfield_HeroLoadoutFlags(TArray<ERsHeroLoadoutFlags> Flags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRsBitfield_HeroInputFlags MakeFRsBitfield_HeroInputFlags(TArray<ERsHeroInputFlags> Flags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRsBitfield_HeroBufferFlags MakeFRsBitfield_HeroBufferFlags(TArray<ERsHeroBufferFlags> Flags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNavStateBitSet(const FRsBitfield_NavState& Bitfield, ERsNavState BitToCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHeroStateModifierValid(URsHeroStateModifierDefinition* Modifier, ERsNavState navState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGripInputHeld(const ARsHero* RsHero);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsGamepadCameraYAxisInverted(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IgnoreGripInputRequirement();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakFRsBitfield_HeroUpgradeFlags(const FRsBitfield_HeroUpgradeFlags& UpgradeFlags, TArray<ERsHeroUpgradeFlags>& Flags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakFRsBitfield_HeroLoadoutFlags(const FRsBitfield_HeroLoadoutFlags& LoadoutFlags, TArray<ERsHeroLoadoutFlags>& Flags);
    
};

