#pragma once
#include "CoreMinimal.h"
#include "SwSlamLevelObjectData.h"
#include "SwSlamLevelObjectGameplayVictimData.generated.h"

USTRUCT(BlueprintType)
struct FSwSlamLevelObjectGameplayVictimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSlamLevelObjectData SlamData;
    
    SWGAME_API FSwSlamLevelObjectGameplayVictimData();
};

