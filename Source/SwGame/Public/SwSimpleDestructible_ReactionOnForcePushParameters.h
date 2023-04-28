#pragma once
#include "CoreMinimal.h"
#include "SwSimpleDestructible_ReactionOnForcePushParameters.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwSimpleDestructible_ReactionOnForcePushParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DestroyPhaseOnForcePush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartPhysicsOnForcePushOnSingleBonesWithPrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionalHitRadiusFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableDebugDrawForHitPoint;
    
    FSwSimpleDestructible_ReactionOnForcePushParameters();
};

