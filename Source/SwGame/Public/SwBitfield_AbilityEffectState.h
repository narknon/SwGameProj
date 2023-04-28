#pragma once
#include "CoreMinimal.h"
#include "SwBitfield_AbilityEffectState.generated.h"

USTRUCT(BlueprintType)
struct FSwBitfield_AbilityEffectState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 Bits;
    
    SWGAME_API FSwBitfield_AbilityEffectState();
};

