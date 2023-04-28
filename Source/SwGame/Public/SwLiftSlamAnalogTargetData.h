#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SwLiftSlamAnalogTargetData.generated.h"

USTRUCT(BlueprintType)
struct FSwLiftSlamAnalogTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTargetSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    SWGAME_API FSwLiftSlamAnalogTargetData();
};

