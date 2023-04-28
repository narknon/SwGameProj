#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "rsAnimInstance.h"
#include "ERsCombatState.h"
#include "ERsIkBoneType.h"
#include "RsAnimMarkupData.h"
#include "RsIKOverride.h"
#include "RsIkAnimInstanceState.h"
#include "RsGameAnimInstance.generated.h"

class UDataTable;
class URsIKDisableIKModifier;
class URsIKModifier;
class URsIKOverrideModifier;

UCLASS(Blueprintable)
class URsGameAnimInstance : public UrsAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasLookAtTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TargetAimYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TargetAimPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CheapIkHipBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheapIkHipsBlendSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEverDoCheapIk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheapIkTraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheapIkComponentOffset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsCombatState::Type> CurrentCombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AnimationMarkupTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsIkAnimInstanceState IkState;
    
public:
    URsGameAnimInstance();
    UFUNCTION(BlueprintCallable)
    void SetOverrideIkOffsetForNextTopologyActivation(const FVector& Offset);
    
    UFUNCTION(BlueprintCallable)
    void RequestForceUnlockIk();
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveIKModifier(URsIKModifier* Modifier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSlotAnimMarkupInfoByAnimName(FName AnimName, FRsAnimMarkupData& AnimInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSlotAnimMarkupInfo(FName SlotName, bool bIsForTransition, FName& AnimName, FRsAnimMarkupData& AnimInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAdjustmentBlendAlpha(FName Channel) const;
    
    UFUNCTION(BlueprintCallable)
    void DisableAdjustmentBlends();
    
    UFUNCTION(BlueprintCallable)
    void ClearOverrideIkOffsetForNextTopologyActivation();
    
    UFUNCTION(BlueprintCallable)
    URsIKOverrideModifier* AddIkOverrideForDuration(const FRsIKOverride& IkOverride, float Duration);
    
    UFUNCTION(BlueprintCallable)
    URsIKOverrideModifier* AddIkOverride(const FRsIKOverride& IkOverride);
    
    UFUNCTION(BlueprintCallable)
    int32 AddIKModifier(URsIKModifier* Modifier);
    
    UFUNCTION(BlueprintCallable)
    URsIKDisableIKModifier* AddDisableIkModifier(const TArray<ERsIkBoneType>& BonesToDisable);
    
};

