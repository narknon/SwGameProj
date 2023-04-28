#pragma once
#include "CoreMinimal.h"
#include "SwBitfield_AbilityState.generated.h"

USTRUCT(BlueprintType)
struct FSwBitfield_AbilityState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 Bits;
    
    SWGAME_API FSwBitfield_AbilityState();
};

