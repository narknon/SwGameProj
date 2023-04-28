#pragma once
#include "CoreMinimal.h"
#include "SwSlamLevelObjectData.generated.h"

USTRUCT(BlueprintType)
struct FSwSlamLevelObjectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialSpeed;
    
    SWGAME_API FSwSlamLevelObjectData();
};

