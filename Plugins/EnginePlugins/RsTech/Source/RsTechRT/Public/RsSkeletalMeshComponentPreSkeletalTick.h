#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "RsSkeletalMeshComponentPreSkeletalTick.generated.h"

USTRUCT(BlueprintType)
struct FRsSkeletalMeshComponentPreSkeletalTick : public FActorComponentTickFunction {
    GENERATED_BODY()
public:
    RSTECHRT_API FRsSkeletalMeshComponentPreSkeletalTick();
};

