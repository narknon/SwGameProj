#pragma once
#include "CoreMinimal.h"
#include "SwHighlightOverrideParameter.h"
#include "SwForceTargetHighlightOverrideParameters.generated.h"

USTRUCT(BlueprintType)
struct FSwForceTargetHighlightOverrideParameters {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwHighlightOverrideParameter ScalarParameters[7];
    
    SWGAME_API FSwForceTargetHighlightOverrideParameters();
};

