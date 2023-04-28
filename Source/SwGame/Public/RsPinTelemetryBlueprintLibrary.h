#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rs/ERsPinTelemetryPlayerWeaponType.h"
#include "RsPinTelemetryBlueprintLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class URsPinTelemetryBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URsPinTelemetryBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_ZTargetSwitched(AActor* PrevTarget, AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_ZTargetActivated(bool bIsZTargetActive, AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_XPGained(float Amount);
    
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_VoidTearEntered(const FString& VoidTearID);
    
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_StimUsed(int32 NumTotalStims, int32 NumRemainingStims, AActor* CurrentTarget);
    
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_SlowBombActivated(int32 NumSecondsThatMeterWasFull);
    
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_ShopUsed(const FString& ShopID);
    
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_SetEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_SavePointMissed(const FString& SavePointID);
    
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_SavePointMenuSelected(const FString& SavePointID, const FString& SubMenuSelected);
    
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_SavePointEntered(const FString& SavePointID);
    
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_RewardsAcquired(TArray<FString> Rewards, AActor* RewardingActor);
    
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_ResumeGame();
    
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_PlayerKilledEnemy();
    
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_PlayerJumped(FVector JumpStartLocation, FVector JumpEndLocation);
    
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_PlayerDied(AActor* KilledBy, TEnumAsByte<ERsPinTelemetryPlayerWeaponType> PlayerWeaponType, int32 NumRemainingHeals);
    
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_OverlookUsed(const FString& OverlookName);
    
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_ObjectiveCompleted(const FString& ObjectiveType, const FString& ObjectiveID);
    
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_NPCDeath(AActor* Killer, const FString& KillingCause, AActor* Victim, const bool bHeroIsKiller, TEnumAsByte<ERsPinTelemetryPlayerWeaponType> HeroWeaponType);
    
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_NPCConversationStarted(AActor* NPCActor);
    
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_MountUsed(const FString& MountType);
    
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_LeaveGame();
    
    UFUNCTION(BlueprintCallable)
    static bool PinTelemetry_IsEnabled();
    
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_HolomapOpen(TArray<FString> RumorIDs);
    
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_HeroStanceEquipped(const FString& PrevStance, const FString& NewStance);
    
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_GenericPlayerInteract(const FString& ActionType, const FString& Context);
    
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_GardenSeedPlanted(const FString& SeedType);
    
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_ForceMeterEmptied(int32 TotalForceMeterAmount);
    
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_FinishedGame();
    
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_CustomizationsEquipped(const FString& CustomizationJSON);
    
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_BeginNewGame();
    
    UFUNCTION(BlueprintCallable)
    static void PinTelemetry_BeastTamed(const FString& BeastType);
    
};

