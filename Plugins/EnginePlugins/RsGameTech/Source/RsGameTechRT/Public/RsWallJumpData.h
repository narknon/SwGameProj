#pragma once
#include "CoreMinimal.h"
#include "RsJumpData.h"
#include "RsWallJumpData.generated.h"

class URsHeroStateModifierDefinition;

USTRUCT(BlueprintType)
struct FRsWallJumpData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsJumpData JumpData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallJumpAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* WallJumpTagModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* WallJumpAirModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* WallJumpRotationModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* WallJumpFallModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallJumpBufferModifierDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallJumpBufferModifierDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* WallJumpBufferModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* WallJumpWallReattachModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallJumpWallReattachModifierTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* WallJumpLedgeDisableModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallJumpLedgeDisableTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* WallJumpActionDisableModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallJumpActionDisableTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* WallJumpForceLimitedAngleDoubleJumpModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallJumpForceLimitedAngleDoubleJumpModifierDuration;
    
    RSGAMETECHRT_API FRsWallJumpData();
};

