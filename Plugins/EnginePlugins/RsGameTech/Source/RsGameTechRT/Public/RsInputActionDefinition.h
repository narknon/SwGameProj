#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ERsQueueActionCheckResult.h"
#include "RsBitfield_HeroBufferFlags.h"
#include "RsInputActionHandler.h"
#include "RsInputActionDefinition.generated.h"

class UObject;
class URsHeroStateModifierDefinition;

UCLASS(Blueprintable)
class URsInputActionDefinition : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AlternativeHoldActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlternativeHoldActionsTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlternativeHoldActionsSequential;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsBitfield_HeroBufferFlags BufferMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnbufferedExecutionFrameThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URsHeroStateModifierDefinition*> ModifiersToClearOnBufferEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBufferWhenHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoldIgnoresBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnHeldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckEvenIfAlreadyConsumed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetBufferedActionOnSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsInputActionHandler> OnPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsInputActionHandler> OnHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsInputActionHandler> OnReleased;
    
    URsInputActionDefinition();
private:
    UFUNCTION(BlueprintCallable)
    ERsQueueActionCheckResult PreQueueActionCheckReturnFunctionSignature(FName InActionName);
    
    UFUNCTION(BlueprintCallable)
    void PreQueueActionCheckRefParamFunctionSignature(FName InActionName, ERsQueueActionCheckResult& Result);
    
public:
    UFUNCTION(BlueprintCallable)
    static void PopulateActionNameList(UObject* ContextObject, TArray<FName>& Options);
    
private:
    UFUNCTION(BlueprintCallable)
    void FunctionSignature();
    
    UFUNCTION(BlueprintCallable)
    bool BoolReturnFunctionSignature(FName InActionName);
    
    UFUNCTION(BlueprintCallable)
    void BoolRefParamFunctionSignature(FName InActionName, bool& Result);
    
};

