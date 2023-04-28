#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsCharacterAnimationData.h"
#include "SwDFXStateHandler_AboveBase.h"
#include "Templates/SubclassOf.h"
#include "SwDFXStateHandler_EdgeAbove.generated.h"

class USwAttackState;

UCLASS(Blueprintable)
class USwDFXStateHandler_EdgeAbove : public USwDFXStateHandler_AboveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData JumpOffAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USwAttackState> JumpOffDescriptionOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAngleToEdge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceToEdgeForAngleTest;
    
    USwDFXStateHandler_EdgeAbove();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector ModifyTargetTestPosition(const FVector& InPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector ModifyTargetTestDirection(const FVector& InDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetJumpOffDescriptionOverrideBP(TSubclassOf<USwAttackState>& OutAttackDescriptionOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetJumpOffAnimDataBP(FRsCharacterAnimationData& OutAttackAnimData);
    
};

