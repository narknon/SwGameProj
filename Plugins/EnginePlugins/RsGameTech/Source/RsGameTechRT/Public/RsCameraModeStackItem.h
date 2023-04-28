#pragma once
#include "CoreMinimal.h"
#include "RsCameraModeStackItem.generated.h"

class URsCameraModeDefinition;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsCameraModeStackItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsCameraModeDefinition* ModeDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    FRsCameraModeStackItem();
};

