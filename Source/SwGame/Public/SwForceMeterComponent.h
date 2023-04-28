#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SwForceOverTimeData.h"
#include "SwOnBarEmptiedSignatureDelegate.h"
#include "SwOnFailedToConsumeForceDelegate.h"
#include "SwOnShadowTimeFinishedSignatureDelegate.h"
#include "SwForceMeterComponent.generated.h"

class AActor;
class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwForceMeterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadowInterpMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxForceMeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceRegenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentForceMeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceRegenSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadowTimeSpeedMultiplierOutOfCombat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwOnBarEmptiedSignature OnForceMeterEmptied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwOnShadowTimeFinishedSignature OnForceMeterShadowTimeFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwOnFailedToConsumeForce OnFailedToConsumeForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldMeterGoNegative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInfiniteForceModifierActive;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwForceOverTimeData> ActiveForceUsageOverTime;
    
public:
    USwForceMeterComponent();
    UFUNCTION(BlueprintCallable)
    static bool UnpauseTargetsRegen(const AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void UnpauseRegen();
    
    UFUNCTION(BlueprintCallable)
    void UnpauseForceOverTime();
    
    UFUNCTION(BlueprintCallable)
    void Unpause();
    
    UFUNCTION(BlueprintCallable)
    static bool StartConsumeForceOverTimeDynamic(const AActor* Target, const FName Identifier, float ForcePerSecond);
    
    UFUNCTION(BlueprintCallable)
    static bool StartConsumeForceOverTime(const AActor* Target, const UDataTable* DataTable, const FName RowName);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxForceMeter(float NewMaxForce, bool bShouldSetCurrentForceToMax);
    
    UFUNCTION(BlueprintCallable)
    static bool RestoreForce(const AActor* Target, float AmountToRestore);
    
    UFUNCTION(BlueprintCallable)
    static bool PauseTargetsRegen(const AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void PauseRegen();
    
    UFUNCTION(BlueprintCallable)
    void PauseForceOverTime();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartConsumeForceOverTime(FName ForceMeterRow, float ConsumptionRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConsumeForceImmediately(FName ForceMeterRow, float ConsumedForce, float ShadowTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancelConsumeForceOverTime(FName ForceMeterRow);
    
    UFUNCTION(BlueprintCallable)
    static bool IsTargetsRegenPaused(const AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    static bool IsTargetsForceMeterEmpty(const AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRegenPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsForceMeterEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastShadowTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetConsumeForceImmediateMultiplier(const UDataTable* DataTable, FName ForceMeterRow) const;
    
    UFUNCTION(BlueprintCallable)
    static bool ConsumeForceImmediately(const AActor* Target, const UDataTable* DataTable, const FName RowName);
    
    UFUNCTION(BlueprintCallable)
    static bool CanConsumeForceImmediately(const AActor* Target, const UDataTable* DataTable, const FName RowName, bool bShouldBroadcastFail);
    
    UFUNCTION(BlueprintCallable)
    static bool CancelConsumeForceOverTimeDynamic(const AActor* Target, const FName Identifier);
    
    UFUNCTION(BlueprintCallable)
    static bool CancelConsumeForceOverTime(const AActor* Target, const UDataTable* DataTable, const FName RowName);
    
};

