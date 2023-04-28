#pragma once
#include "CoreMinimal.h"
#include "SwHighlightBlendData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FSwHighlightBlendData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BlendCurve;
    
    SWGAME_API FSwHighlightBlendData();
};

