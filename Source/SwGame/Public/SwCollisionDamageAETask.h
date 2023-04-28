#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ERsTopologyMode.h"
#include "RsAbilityEffectTask.h"
#include "SwCollisionDamageAETask.generated.h"

class AActor;
class UPrimitiveComponent;
class USwCollisionDamageData;

UCLASS(Blueprintable)
class USwCollisionDamageAETask : public URsAbilityEffectTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwCollisionDamageData* DefaultCollisionDamageData;
    
    USwCollisionDamageAETask();
private:
    UFUNCTION(BlueprintCallable)
    void OnCapsuleHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnBumperTopologyChanged(ERsTopologyMode previousMode, ERsTopologyMode newMode, float Proximity);
    
};

