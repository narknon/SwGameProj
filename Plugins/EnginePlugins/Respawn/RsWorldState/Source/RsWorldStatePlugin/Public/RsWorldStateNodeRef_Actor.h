#pragma once
#include "CoreMinimal.h"
#include "RsWorldStateNodeRef.h"
#include "RsWorldStateNodeRef_Actor.generated.h"

USTRUCT(BlueprintType)
struct RSWORLDSTATEPLUGIN_API FRsWorldStateNodeRef_Actor : public FRsWorldStateNodeRef {
    GENERATED_BODY()
public:
    FRsWorldStateNodeRef_Actor();
};

