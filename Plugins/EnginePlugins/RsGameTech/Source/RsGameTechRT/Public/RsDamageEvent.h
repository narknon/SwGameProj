#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "RsDamageEvent.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsDamageEvent : public FDamageEvent {
    GENERATED_BODY()
public:
    FRsDamageEvent();
};

