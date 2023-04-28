#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EffectData.h"
#include "RsAbilitySystem.generated.h"

class UDataTable;
class URsAbilityPriorityManager;
class URsAbilitySystemTask;

UCLASS(Blueprintable)
class URsAbilitySystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEffectData> EffectsInPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URsAbilitySystemTask*> TasksInPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsAbilityPriorityManager* PriorityManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ForceAbilityFoliageInteractionFilterTable;
    
public:
    URsAbilitySystem();
};

