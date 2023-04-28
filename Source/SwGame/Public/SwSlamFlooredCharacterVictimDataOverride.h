#pragma once
#include "CoreMinimal.h"
#include "SwSlamFlooredCharacterVictimDataOverride.generated.h"

USTRUCT(BlueprintType)
struct FSwSlamFlooredCharacterVictimDataOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideFloorDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlamFloorLoopDuration;
    
    SWGAME_API FSwSlamFlooredCharacterVictimDataOverride();
};

