#pragma once
#include "CoreMinimal.h"
#include "ESwCharacterNavToInputMagnitudePreset.h"
#include "SwCharacterNavToInputMagnitude.generated.h"

USTRUCT(BlueprintType)
struct FSwCharacterNavToInputMagnitude {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwCharacterNavToInputMagnitudePreset InputMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomInputMagnitude;
    
    SWGAME_API FSwCharacterNavToInputMagnitude();
};

