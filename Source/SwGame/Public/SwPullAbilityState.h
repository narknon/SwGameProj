#pragma once
#include "CoreMinimal.h"
#include "RsCharacterAnimationData.h"
#include "ESwPullAbilityState.h"
#include "ESwPullEffectState.h"
#include "RsAbilityState.h"
#include "SwPullAbilityState.generated.h"

class AActor;

UCLASS(Blueprintable)
class USwPullAbilityState : public URsAbilityState {
    GENERATED_BODY()
public:
    USwPullAbilityState();
    UFUNCTION(BlueprintCallable)
    void TriggerPullTractorSlash(const FRsCharacterAnimationData& AnimData);
    
    UFUNCTION(BlueprintCallable)
    void TriggerPullDoubleSlamBegin();
    
    UFUNCTION(BlueprintCallable)
    void TriggerPullDoubleSlamAllowContact();
    
    UFUNCTION(BlueprintCallable)
    void TriggerPullDoublePush();
    
    UFUNCTION(BlueprintCallable)
    void TriggerPullDouble();
    
    UFUNCTION(BlueprintCallable)
    void PreparePullDoubleSlamSync();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetPullTarget(int32 idx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESwPullEffectState GetPullEffectState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESwPullAbilityState GetPullAbilityState() const;
    
};

