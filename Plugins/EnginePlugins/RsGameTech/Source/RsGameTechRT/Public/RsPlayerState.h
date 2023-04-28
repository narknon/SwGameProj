#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "GameplayTagContainer.h"
#include "RsBitfield_HeroLoadoutFlags.h"
#include "RsPlayerStateLoadedDelegate.h"
#include "RsPlayerState.generated.h"

UCLASS(Blueprintable)
class ARsPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FRsBitfield_HeroLoadoutFlags LoadoutFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FRsBitfield_HeroLoadoutFlags LoadoutFlags_DontAffectWorldState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HeroUpgradeTags;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPlayerStateLoaded LVL_PlayerStateLoaded;
    
    ARsPlayerState();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCharmEquippedBP(FName CharmName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReloaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsBitfield_HeroLoadoutFlags GetCurrentLoadoutFlags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetCurrentHeroUpgradeTags() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStateLoaded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPreSaveGame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCacheOffNewGamePlusInfo();
    
};

