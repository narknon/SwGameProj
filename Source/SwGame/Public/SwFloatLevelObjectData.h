#pragma once
#include "CoreMinimal.h"
#include "ESwFloatType.h"
#include "SwFloatLevelObjectData.generated.h"

USTRUCT(BlueprintType)
struct FSwFloatLevelObjectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwFloatType FloatType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    SWGAME_API FSwFloatLevelObjectData();
};

