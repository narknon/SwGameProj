#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "RsAutoTestActor.generated.h"

UCLASS(Blueprintable)
class ARsAutoTestActor : public AActor {
    GENERATED_BODY()
public:
    ARsAutoTestActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TagRemoved(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TagAdded(const FGameplayTag& Tag);
    
};

