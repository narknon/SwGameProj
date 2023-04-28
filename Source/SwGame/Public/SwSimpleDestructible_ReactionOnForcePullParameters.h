#pragma once
#include "CoreMinimal.h"
#include "SwSimpleDestructible_ForcePullPhysicsFreezeParameters.h"
#include "SwSimpleDestructible_ReactionOnForcePullParameters.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwSimpleDestructible_ReactionOnForcePullParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DestroyPhaseOnForcePull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSimpleDestructible_ForcePullPhysicsFreezeParameters FreezePhysics;
    
    FSwSimpleDestructible_ReactionOnForcePullParameters();
};

