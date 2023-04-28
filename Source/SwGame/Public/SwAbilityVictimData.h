#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESwVictimType.h"
#include "SwCollisionDamageOverrides.h"
#include "SwDirectionAssistData.h"
#include "SwLiftFXVictimData.h"
#include "SwLiftGameplayVictimData.h"
#include "SwLiftOverrides.h"
#include "SwLiftSlamGameplayVictimData.h"
#include "SwPullFXVictimData.h"
#include "SwPullGameplayVictimData.h"
#include "SwPullOverrides.h"
#include "SwPushFXVictimData.h"
#include "SwPushGameplayVictimData.h"
#include "SwPushOverrides.h"
#include "SwSlamFXVictimData.h"
#include "SwSlamGameplayVictimData.h"
#include "SwSlamOverrides.h"
#include "SwSlowFXVictimData.h"
#include "SwSlowGameplayVictimData.h"
#include "SwTelekinesisFXVictimData.h"
#include "SwTelekinesisGameplayVictimData.h"
#include "SwAbilityVictimData.generated.h"

class USwCollisionDamageData;

UCLASS(Blueprintable)
class SWGAME_API USwAbilityVictimData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwVictimType VictimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwPushOverrides> PushOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwPushGameplayVictimData PushGameplayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwPushFXVictimData PushFXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwPullOverrides> PullOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwPullGameplayVictimData PullGameplayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwPullFXVictimData PullFXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSlowGameplayVictimData SlowGameplayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSlowFXVictimData SlowFXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwTelekinesisGameplayVictimData TelekinesisGameplayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwTelekinesisFXVictimData TelekinesisFXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwLiftSlamGameplayVictimData LiftSlamGameplayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwLiftOverrides> LiftOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwLiftGameplayVictimData LiftGameplayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwLiftFXVictimData LiftFXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwSlamOverrides> SlamOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSlamGameplayVictimData SlamGameplayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSlamFXVictimData SlamFXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwCollisionDamageOverrides> CollisionDamageOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwCollisionDamageData* CollisionDamageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwDirectionAssistData DirectionAssistData;
    
    USwAbilityVictimData();
};

