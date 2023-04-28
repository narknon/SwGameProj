#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsCharacterAnimationData.h"
#include "SwDFXStateHandler.h"
#include "Templates/SubclassOf.h"
#include "SwDFXStateHandler_LedgeBelow.generated.h"

class USwAttackState;

UCLASS(Blueprintable)
class USwDFXStateHandler_LedgeBelow : public USwDFXStateHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData ClimbUpAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USwAttackState> ClimbUpDescriptionOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bClimbFinished;
    
    USwDFXStateHandler_LedgeBelow();
    UFUNCTION(BlueprintCallable)
    void OnDFXClimbStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector ModifyTargetTestPosition(const FVector& InPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector ModifyTargetTestDirection(const FVector& InDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetClimbUpDescriptionOverrideBP(TSubclassOf<USwAttackState>& OutAttackDescriptionOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetClimbUpAnimDataBP(FRsCharacterAnimationData& OutAttackAnimData);
    
};

