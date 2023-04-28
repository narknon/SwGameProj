#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimEnums.h"
#include "ERsMotionSample.h"
#include "RsScriptVariable.h"
#include "rsAnimInstance.generated.h"

class ArsActor;

UCLASS(Blueprintable, Config=Engine, Const, DefaultConfig, DefaultToInstanced, ProjectUserConfig)
class UrsAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CinematicBlendInterp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsOnLeftFoot: 1;
    
    UrsAnimInstance();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ArsActor* TryGetRsActorOwner() const;
    
    UFUNCTION(BlueprintCallable)
    void SetIsSyncing(bool NewIsSyncing);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MotionSampleIsLessThan(const TEnumAsByte<ERsMotionSample> motionSample, const float V) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MotionSampleIsInRange(const TEnumAsByte<ERsMotionSample> motionSample, const float RangeMin, const float RangeMax) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MotionSampleIsGreaterThan(const TEnumAsByte<ERsMotionSample> motionSample, const float V) const;
    
    UFUNCTION(BlueprintCallable)
    void LockMotionSample(const TEnumAsByte<ERsMotionSample> motionSample, const bool Lock);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSyncing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlotActive(FName SlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IgnoreMotionSampleOrIsLessThan(const TEnumAsByte<ERsMotionSample> motionSample, const float V, const float ignoreValue, const bool ignoredReturn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IgnoreMotionSampleOrIsInRange(const TEnumAsByte<ERsMotionSample> motionSample, const float RangeMin, const float RangeMax, const float ignoreValue, const bool ignoredReturn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IgnoreMotionSampleOrIsGreaterThan(const TEnumAsByte<ERsMotionSample> motionSample, const float V, const float ignoreValue, const bool ignoredReturn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetVariableAsInteger(int32& Value, const FRsScriptVariable& Variable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetVariableAsFloat(float& Value, const FRsScriptVariable& Variable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetVariableAsBool(bool& Value, const FRsScriptVariable& Variable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetRootMotionTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetRootMotionRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ERootMotionMode::Type> GetRootMotionMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMotionSample(const TEnumAsByte<ERsMotionSample> motionSample) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentStateForStateMachine(FName MachineName, FName& StateName, bool& bFullyBlendedIn);
    
    UFUNCTION(BlueprintCallable)
    FName GetAnimNamePlayingInSlot(FName SlotName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindVariable(FRsScriptVariable& Variable, const FName VariableName) const;
    
};

