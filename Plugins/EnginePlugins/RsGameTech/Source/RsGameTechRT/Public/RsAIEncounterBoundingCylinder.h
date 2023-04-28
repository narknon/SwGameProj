#pragma once
#include "CoreMinimal.h"
#include "RsAIEncounterBoundingCylinder.generated.h"

USTRUCT(BlueprintType)
struct FRsAIEncounterBoundingCylinder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfHeight;
    
    RSGAMETECHRT_API FRsAIEncounterBoundingCylinder();
};

