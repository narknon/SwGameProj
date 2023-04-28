#pragma once
#include "CoreMinimal.h"
#include "RsWorldStateNodeRef.h"
#include "SwWorldStateNodeRef_LevelTag.generated.h"

USTRUCT(BlueprintType)
struct FSwWorldStateNodeRef_LevelTag : public FRsWorldStateNodeRef {
    GENERATED_BODY()
public:
    SWGAME_API FSwWorldStateNodeRef_LevelTag();
};

