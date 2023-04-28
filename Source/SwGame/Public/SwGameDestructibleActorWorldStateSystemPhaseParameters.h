#pragma once
#include "CoreMinimal.h"
#include "RsWorldStateNodeRef.h"
#include "SwGameDestructibleActorWorldStateSystemPhaseParameters.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwGameDestructibleActorWorldStateSystemPhaseParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldStateNodeRef WorldStateNodeToCompleteWhenPhaseIsDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bResetIfDieWithoutSaving: 1;
    
    FSwGameDestructibleActorWorldStateSystemPhaseParameters();
};

