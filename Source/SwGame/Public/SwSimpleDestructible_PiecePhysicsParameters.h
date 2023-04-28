#pragma once
#include "CoreMinimal.h"
#include "SwSimpleDestructible_PiecePhysicsParameters.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwSimpleDestructible_PiecePhysicsParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitLocationImpulseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitLocationImpulseRandomVariation;
    
    FSwSimpleDestructible_PiecePhysicsParameters();
};

