#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsCharacterAnimationData.h"
#include "ESwDFXLetGoState.h"
#include "SwDFXStateHandler_AboveBase.h"
#include "Templates/SubclassOf.h"
#include "SwDFXStateHandler_ClimbAbove.generated.h"

class USwAttackState;
class USwTargetingProfile;

UCLASS(Blueprintable)
class USwDFXStateHandler_ClimbAbove : public USwDFXStateHandler_AboveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwTargetingProfile* OverheadTargetingProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData JumpOffAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USwAttackState> JumpOffDescriptionOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESwDFXLetGoState bLetGoStatus;
    
    USwDFXStateHandler_ClimbAbove();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector ModifyTargetTestPosition(const FVector& InPosition, bool bOverhead);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector ModifyTargetTestDirection(const FVector& InDirection, bool bOverhead);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LetGoEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetJumpOffDescriptionOverrideBP(TSubclassOf<USwAttackState>& OutAttackDescriptionOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetJumpOffAnimDataBP(FRsCharacterAnimationData& OutAttackAnimData);
    
};

