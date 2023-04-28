#pragma once
#include "CoreMinimal.h"
#include "SwHighlightHandle.generated.h"

USTRUCT(BlueprintType)
struct FSwHighlightHandle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 HighlightId;
    
    SWGAME_API FSwHighlightHandle();
};

