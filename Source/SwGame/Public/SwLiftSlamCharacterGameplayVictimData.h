#pragma once
#include "CoreMinimal.h"
#include "ESwLiftEnterModifierType.h"
#include "SwFloatCharacterData.h"
#include "SwLiftCharacterData.h"
#include "SwLiftStaggerCharacterData.h"
#include "SwLiftStruggleCharacterData.h"
#include "SwRetractCharacterData.h"
#include "SwSlamCharacterData.h"
#include "SwLiftSlamCharacterGameplayVictimData.generated.h"

USTRUCT(BlueprintType)
struct FSwLiftSlamCharacterGameplayVictimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwLiftEnterModifierType LiftEnterModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LiftEnterStruggleDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwLiftCharacterData LiftCharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwLiftStruggleCharacterData LiftStruggleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwLiftStaggerCharacterData LiftStaggerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwFloatCharacterData FloatCharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwRetractCharacterData RetractCharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSlamCharacterData SlamCharacterData;
    
    SWGAME_API FSwLiftSlamCharacterGameplayVictimData();
};

