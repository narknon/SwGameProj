#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "RsEditorActorTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FRsEditorActorTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    RSTECHRT_API FRsEditorActorTickFunction();
};

template<>
struct TStructOpsTypeTraits<FRsEditorActorTickFunction> : public TStructOpsTypeTraitsBase2<FRsEditorActorTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

