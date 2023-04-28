#pragma once
#include "CoreMinimal.h"
#include "RsAIGameStateSettings.generated.h"

class URsAIBehaviorStateMachine;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAIGameStateSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreCombatCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostCombatCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeUntilTranquilityAchievedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeUntilTranquilityAchievedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToAggroEnemiesToRemainInCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<URsAIBehaviorStateMachine> DefaultAwarenessStateMachine;
    
    FRsAIGameStateSettings();
};

