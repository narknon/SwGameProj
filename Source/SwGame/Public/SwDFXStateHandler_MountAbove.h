#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsCharacterAnimationData.h"
#include "SwDFXStateHandler_AboveBase.h"
#include "Templates/SubclassOf.h"
#include "SwDFXStateHandler_MountAbove.generated.h"

class USwAttackState;

UCLASS(Blueprintable)
class USwDFXStateHandler_MountAbove : public USwDFXStateHandler_AboveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData DismountAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USwAttackState> DismountDescriptionOverride;
    
    USwDFXStateHandler_MountAbove();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector ModifyTargetTestPosition(const FVector& InPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector ModifyTargetTestDirection(const FVector& InDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool LetGo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetDismountDescriptionOverrideBP(TSubclassOf<USwAttackState>& OutAttackDescriptionOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetDismountAnimDataBP(FRsCharacterAnimationData& OutAttackAnimData);
    
};

