#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RsHitEvent.h"
#include "SwOnStaminaBarEmptiedSignatureDelegate.h"
#include "SwOnStaminaShadowTimeFinishedSignatureDelegate.h"
#include "SwStaminaOverTimeData.h"
#include "SwStaminaMeterComponent.generated.h"

class AActor;
class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SWGAME_API USwStaminaMeterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaRegenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaEmptiedRegenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaRegenSpeed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwOnStaminaBarEmptiedSignature OnStaminaMeterEmptied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwOnStaminaShadowTimeFinishedSignature OnStaminaMeterShadowTimeFinished;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwStaminaOverTimeData> ActiveStaminaUsageOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float OverrideStaminaRegenSpeed;
    
public:
    USwStaminaMeterComponent();
    UFUNCTION(BlueprintCallable)
    static bool UnpauseTargetsRegen(const AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void UnpauseStaminaOverTime();
    
    UFUNCTION(BlueprintCallable)
    void UnpauseRegen();
    
    UFUNCTION(BlueprintCallable)
    void Unpause();
    
    UFUNCTION(BlueprintCallable)
    static bool StartConsumeStaminaOverTime(const AActor* Target, const UDataTable* DataTable, const FName RowName);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideRegenSpeed(float OverrideRegenSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxStaminaMeter(float NewMaxStamina, bool bShouldSetCurrentStaminaToMax);
    
    UFUNCTION(BlueprintCallable)
    static void RestoreStamina(const AActor* Target, float AmountToRestore);
    
    UFUNCTION(BlueprintCallable)
    void ResetOverrideRegenSpeed();
    
    UFUNCTION(BlueprintCallable)
    static bool PauseTargetsRegen(const AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void PauseStaminaOverTime();
    
    UFUNCTION(BlueprintCallable)
    void PauseRegen();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartConsumeStaminaOverTime(FName StaminaMeterRow, float ConsumptionRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConsumeStaminaImmediately(FName StaminaMeterRow, float ConsumedStamina, float ShadowTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancelConsumeStaminaOverTime(FName StaminaMeterRow);
    
    UFUNCTION(BlueprintCallable)
    static bool IsTargetsStaminaMeterEmpty(const AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    static bool IsTargetsRegenPaused(const AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStaminaMeterEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRegenPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalStaminaAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStaminaAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastShadowTime() const;
    
    UFUNCTION(BlueprintCallable)
    static bool ConsumeStaminaImmediately(const AActor* Target, const UDataTable* DataTable, const FName RowName);
    
    UFUNCTION(BlueprintCallable)
    static bool ConsumeStaminaForBlock(const AActor* Target, const FRsHitEvent& HitEvent);
    
    UFUNCTION(BlueprintCallable)
    static bool CancelConsumeStaminaOverTime(const AActor* Target, const UDataTable* DataTable, const FName RowName);
    
};

