#pragma once
#include "CoreMinimal.h"
#include "RsGlobalJumpData.generated.h"

class URsHeroStateModifierDefinition;

USTRUCT(BlueprintType)
struct FRsGlobalJumpData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName JumpInputActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* DisableClimbAutoGrabModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostJumpDisableClimbAutoGrabDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* DisableWallHangModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostJumpDisableWallHangDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpDuringGraceWindowImpulseDelay;
    
    RSGAMETECHRT_API FRsGlobalJumpData();
};

