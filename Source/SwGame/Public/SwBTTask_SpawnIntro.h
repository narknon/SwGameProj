#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ERsAIAwarenessState.h"
#include "RsAISpawnerIntroSettings.h"
#include "RsAISpawnerPOISettings.h"
#include "ERsTopologyMode.h"
#include "SwBTTask_SpawnIntro.generated.h"

class ARsAIController;
class UAnimMontage;

UCLASS(Blueprintable)
class USwBTTask_SpawnIntro : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAISpawnerIntroSettings ThisSpawnIntroSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAISpawnerPOISettings ThisSpawnPOISettings;
    
public:
    USwBTTask_SpawnIntro();
private:
    UFUNCTION(BlueprintCallable)
    void OnTopologyChanged(ERsTopologyMode previousMode, ERsTopologyMode newMode, float Proximity);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnAwarenessStateChanged(ARsAIController* AIController, TEnumAsByte<ERsAIAwarenessState::Type> PreviousAwarenessState, TEnumAsByte<ERsAIAwarenessState::Type> NewAwarenessState);
    
};

