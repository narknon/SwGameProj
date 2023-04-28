#pragma once
#include "CoreMinimal.h"
#include "AnimState_BalanceBeam.h"
#include "AnimState_Camera.h"
#include "AnimState_Climb.h"
#include "AnimState_Hero.h"
#include "AnimState_Jump.h"
#include "AnimState_Ledge.h"
#include "AnimState_NavTransition.h"
#include "AnimState_Quicksand.h"
#include "AnimState_SpeederBike.h"
#include "AnimState_Swim.h"
#include "AnimState_WallHang.h"
#include "AnimState_Zipline.h"
#include "RsGameAnimInstance.h"
#include "RsPlayerAnimInstance.generated.h"

class ARsHero;

UCLASS(Blueprintable)
class URsPlayerAnimInstance : public URsGameAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimState_WallHang WallHangState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimState_BalanceBeam BalanceBeamState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimState_Jump JumpState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimState_Ledge LedgeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimState_Climb climbState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimState_Zipline ZiplineState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimState_Swim SwimState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimState_Quicksand QuicksandState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimState_NavTransition NavTransitionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimState_Hero HeroState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimState_SpeederBike SpeederBikeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimState_Camera CameraState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPlayingAsCere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAnimIsBlocking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Hero_AttackDir;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARsHero* RsHeroRef;
    
public:
    URsPlayerAnimInstance();
};

