#pragma once
#include "CoreMinimal.h"
#include "SwHybridTargetDirectionData.h"
#include "SwHybridTargetData.generated.h"

USTRUCT(BlueprintType)
struct FSwHybridTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwHybridTargetDirectionData Stick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwHybridTargetDirectionData Camera;
    
    SWGAME_API FSwHybridTargetData();
};

