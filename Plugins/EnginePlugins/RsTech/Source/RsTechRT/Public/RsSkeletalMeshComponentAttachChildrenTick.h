#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "RsSkeletalMeshComponentAttachChildrenTick.generated.h"

USTRUCT(BlueprintType)
struct FRsSkeletalMeshComponentAttachChildrenTick : public FActorComponentTickFunction {
    GENERATED_BODY()
public:
    RSTECHRT_API FRsSkeletalMeshComponentAttachChildrenTick();
};

