#pragma once
#include "CoreMinimal.h"
#include "ERsSwimState.h"
#include "AnimState_Swim.generated.h"

USTRUCT(BlueprintType)
struct FAnimState_Swim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsSwimState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredPitchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiveUpAnimationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiveDownAnimationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostUnderwaterAnimationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AnticipateSwimAfterCinematic;
    
    RSGAMETECHRT_API FAnimState_Swim();
};

