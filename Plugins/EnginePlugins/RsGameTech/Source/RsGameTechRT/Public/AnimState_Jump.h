#pragma once
#include "CoreMinimal.h"
#include "AnimState_Jump.generated.h"

USTRUCT(BlueprintType)
struct FAnimState_Jump {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSlideJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWallScurryJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSwingBeamJumpForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSwingBeamJumpBackward;
    
    RSGAMETECHRT_API FAnimState_Jump();
};

