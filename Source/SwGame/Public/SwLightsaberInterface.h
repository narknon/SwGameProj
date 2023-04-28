#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SwLightsaberBladeState.h"
#include "SwLightsaberInterface.generated.h"

class ARsCharacter;

UINTERFACE(Blueprintable)
class SWGAME_API USwLightsaberInterface : public UInterface {
    GENERATED_BODY()
};

class SWGAME_API ISwLightsaberInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLightsaberMarksState(bool bEnabled, bool bSyncKill);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OverchargeEffect(bool bStart, bool bActivate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsBladeExtended() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FSwLightsaberBladeState GetBladeState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExtendRetractBlade(bool bExtend, bool bInstant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CatchLightsaber(const ARsCharacter* CatchingCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanBeForcePulledByCharacter(const ARsCharacter* PullingCharacter);
    
};

