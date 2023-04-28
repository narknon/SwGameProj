#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SwLightsaberBladeState.h"
#include "SwLightsaberInterface.generated.h"

class ARsCharacter;

UINTERFACE(Blueprintable)
class USwLightsaberInterface : public UInterface {
    GENERATED_BODY()
};

class ISwLightsaberInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLightsaberMarksState(bool bEnabled, bool bSyncKill);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OverchargeEffect(bool bStart, bool bActivate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsBladeExtended() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FSwLightsaberBladeState GetBladeState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExtendRetractBlade(bool bExtend, bool bInstant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CatchLightsaber(const ARsCharacter* CatchingCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanBeForcePulledByCharacter(const ARsCharacter* PullingCharacter);
    
};

