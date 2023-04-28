#pragma once
#include "CoreMinimal.h"
#include "SwPullDoubleSlamLevelObjectData.generated.h"

USTRUCT(BlueprintType)
struct FSwPullDoubleSlamLevelObjectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageDealtToOther;
    
    SWGAME_API FSwPullDoubleSlamLevelObjectData();
};

