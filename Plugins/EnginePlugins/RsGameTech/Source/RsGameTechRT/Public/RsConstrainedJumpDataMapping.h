#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERsConstrainedJumpDirection.h"
#include "RsConstrainedJumpDataMapping.generated.h"

class URsHeroStateModifierDefinition;

USTRUCT(BlueprintType)
struct FRsConstrainedJumpDataMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERsConstrainedJumpDirection, FVector> JumpVelocities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* ClimbDisableHeroStateModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* LedgeDisableHeroStateModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERsConstrainedJumpDirection, float> ClimbDisableTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERsConstrainedJumpDirection, float> LedgeDisableTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* AutoGrabDisableHeroStateModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERsConstrainedJumpDirection, float> AutoGrabDisableTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* JumpDisableHeroStateModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERsConstrainedJumpDirection, float> JumpDisableTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* PhaseDashDisableHeroStateModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERsConstrainedJumpDirection, float> PhaseDashDisableTimes;
    
    RSGAMETECHRT_API FRsConstrainedJumpDataMapping();
};

