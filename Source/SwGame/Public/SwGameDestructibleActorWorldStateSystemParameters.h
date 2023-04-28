#pragma once
#include "CoreMinimal.h"
#include "RsWorldStateNodeRef.h"
#include "SwGameDestructibleActorWorldStateSystemParameters.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwGameDestructibleActorWorldStateSystemParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldStateNodeRef WorldStateNodeToCompleteWhenActorIsFullyDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bResetIfDieWithoutSaving: 1;
    
    FSwGameDestructibleActorWorldStateSystemParameters();
};

