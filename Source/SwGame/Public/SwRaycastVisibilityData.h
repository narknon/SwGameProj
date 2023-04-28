#pragma once
#include "CoreMinimal.h"
#include "SwRaycastVisibilityData.generated.h"

USTRUCT(BlueprintType)
struct FSwRaycastVisibilityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRaycastVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibilityConfidence;
    
    SWGAME_API FSwRaycastVisibilityData();
};

