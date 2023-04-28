#pragma once
#include "CoreMinimal.h"
#include "ESwLiftEnterModifierType.h"
#include "SwFloatLevelObjectData.h"
#include "SwLiftLevelObjectData.h"
#include "SwLiftStruggleLevelObjectData.h"
#include "SwLiftLevelObjectGameplayVictimData.generated.h"

USTRUCT(BlueprintType)
struct FSwLiftLevelObjectGameplayVictimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwLiftEnterModifierType LiftEnterModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LiftEnterStruggleDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwLiftLevelObjectData LiftData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwLiftStruggleLevelObjectData LiftStruggleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwFloatLevelObjectData FloatData;
    
    SWGAME_API FSwLiftLevelObjectGameplayVictimData();
};

