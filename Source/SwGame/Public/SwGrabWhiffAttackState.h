#pragma once
#include "CoreMinimal.h"
#include "ERsAIBlendspaceInputSource.h"
#include "SwAttackState.h"
#include "SwGrabWhiffAttackState.generated.h"

class AActor;
class URsSyncDefinition;

UCLASS(Blueprintable)
class USwGrabWhiffAttackState : public USwAttackState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsSyncDefinition* SyncDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIBlendspaceInputSource::Type> SyncBlendSpaceInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSwapMasterAndSlaveForGrabSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGrabSyncActive;
    
public:
    USwGrabWhiffAttackState();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreGrabStart(AActor* Victim);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGrabStart(AActor* Victim);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<AActor*> GetAdditionalTargets(AActor* InGrabTarget);
    
};

