#pragma once
#include "CoreMinimal.h"
#include "SwBitfield_AuxiliaryAbilityState.generated.h"

USTRUCT(BlueprintType)
struct FSwBitfield_AuxiliaryAbilityState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 Bits;
    
    SWGAME_API FSwBitfield_AuxiliaryAbilityState();
};

