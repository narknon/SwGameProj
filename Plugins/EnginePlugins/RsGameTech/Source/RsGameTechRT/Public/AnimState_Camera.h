#pragma once
#include "CoreMinimal.h"
#include "AnimState_Camera.generated.h"

USTRUCT(BlueprintType)
struct FAnimState_Camera {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleBlend;
    
    RSGAMETECHRT_API FAnimState_Camera();
};

