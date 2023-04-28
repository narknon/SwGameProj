#pragma once
#include "CoreMinimal.h"
#include "SwAnalogFloatLevelObjectData.h"
#include "SwAnalogLiftLevelObjectData.h"
#include "SwAnalogRetractLevelObjectData.h"
#include "SwAnalogSlamLevelObjectData.h"
#include "SwLiftSlamAnalogLevelObjectVictimData.generated.h"

USTRUCT(BlueprintType)
struct FSwLiftSlamAnalogLevelObjectVictimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwAnalogLiftLevelObjectData LiftData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwAnalogFloatLevelObjectData FloatData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwAnalogRetractLevelObjectData RetractData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwAnalogSlamLevelObjectData SlamData;
    
    SWGAME_API FSwLiftSlamAnalogLevelObjectVictimData();
};

