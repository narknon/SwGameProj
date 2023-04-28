#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "Engine/EngineTypes.h"
#include "RsBTDecorator_IsAliveOrNoHealthComponent.generated.h"

class AActor;

UCLASS(Blueprintable)
class URsBTDecorator_IsAliveOrNoHealthComponent : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ActorToCheckKey;
    
public:
    URsBTDecorator_IsAliveOrNoHealthComponent();
private:
    UFUNCTION(BlueprintCallable)
    void OnActorToCheckEndPlay(AActor* ActorEndingPlay, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void OnActorToCheckDied(AActor* DeadActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorToCheckDestroyed(AActor* DestroyedActor);
    
};

