#pragma once
#include "CoreMinimal.h"
#include "SwHighlightOverrideParameter.generated.h"

USTRUCT(BlueprintType)
struct FSwHighlightOverrideParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    SWGAME_API FSwHighlightOverrideParameter();
};

