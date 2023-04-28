#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/SceneComponent.h"
#include "Engine/EngineTypes.h"
#include "ERsAttackerDirection.h"
#include "ERsCombatDefenseSuccessType.h"
#include "RsCharacterAnimationData.h"
#include "AICombatAttackTableRow.h"
#include "ButtonMashEventDelegate.h"
#include "ButtonMashSyncGroupParameters.h"
#include "CombatAttackTableRow.h"
#include "EButtonMashLengthType.h"
#include "RandomShuffler.h"
#include "SwButtonMashConfiguration.h"
#include "SwSpeederBikeSyncID.h"
#include "SwSpeederBikeSyncParameters.h"
#include "Templates/SubclassOf.h"
#include "SwGameplayLibrary.generated.h"

class AActor;
class AR4PlayerController;
class ARsCharacter;
class ARsPlayerController;
class ASwAIBuddyDroid;
class ASwHero;
class ArsActor;
class UAnimSequenceBase;
class UDataTable;
class UObject;
class UPrimitiveComponent;
class URsAbility;
class URsCameraModeDefinition;
class URsSyncDefinition;
class USceneComponent;
class USkinnedMeshComponent;
class USwHighlightManager;
class USwTargetingProfile;

UCLASS(Blueprintable)
class USwGameplayLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USwGameplayLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void StopSpeederBikeSync(UObject* WorldContext, const FSwSpeederBikeSyncID& SyncID, const float MontagesBlendOutTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void StopDrivingVehicle(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void StopActiveButtonMashSequence(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static FSwSpeederBikeSyncID StartSpeederBikeSync(UObject* WorldContext, const FSwSpeederBikeSyncParameters& SyncParameters);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void StartSaberClash(UObject* WorldContext, URsSyncDefinition* ClashSync, AActor* ClashActor, float ButtonMashDuration, float ClashDuration, float OscillationsPerSecond, float ApprovableClashStart, float MinApprovableClashArea, float MaxApprovableClashArea, int32 MaxButtonMashes, FName ClashFinishAction);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void StartDrivingVehicle(UObject* WorldContext, AActor* VehicleActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void StartButtonMashSequenceForSyncGroup(UObject* WorldContext, FName InputAction, bool bDeferEvents, int32 SyncGroupID, const FButtonMashSyncGroupParameters& SyncGroupData, const FButtonMashEvent& OnEnd, const FButtonMashEvent& OnButtonPress, const FButtonMashEvent& OnSuccess, const FButtonMashEvent& OnFail, float AccessibilityAutoSucceedDuration, float AccessibilityHoldTimeToSucceed);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void StartButtonMashSequenceDurationBased(UObject* WorldContext, FName InputAction, int32 NumPressesToSucceed, float PressHoldTimeToSucceed, bool bDeferEvents, float Duration, const FButtonMashEvent& OnEnd, const FButtonMashEvent& OnButtonPress, const FButtonMashEvent& OnSuccess, const FButtonMashEvent& OnFail, float AccessibilityAutoSucceedDuration, float AccessibilityHoldTimeToSucceed);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void StartButtonMashSequenceAnimNotifyBased(UObject* WorldContext, FName InputAction, int32 NumPressesToSucceed, float PressHoldTimeToSucceed, bool bDeferEvents, FName NotifyIdentifier, const FButtonMashEvent& OnEnd, const FButtonMashEvent& OnButtonPress, const FButtonMashEvent& OnSuccess, const FButtonMashEvent& OnFail, float AccessibilityAutoSucceedDuration, float AccessibilityHoldTimeToSucceed);
    
    UFUNCTION(BlueprintCallable)
    static URsCameraModeDefinition* SetZTargetCameraForTarget2(AR4PlayerController* playerCtrl, AActor* Target, int32 CameraModePriority);
    
    UFUNCTION(BlueprintCallable)
    static FName SetZTargetCameraForTarget(AR4PlayerController* playerCtrl, AActor* Target, int32 CameraModePriority);
    
    UFUNCTION(BlueprintCallable)
    static bool SetForcePushAttackRow(const UDataTable* AttackTable, UPARAM(Ref) FCombatAttackTableRow& InOutAttackRow);
    
    UFUNCTION(BlueprintCallable)
    static FTransform RsGetSocketTransformFromHierarcy(USkinnedMeshComponent* Target, FName InSocketName, TEnumAsByte<ERelativeTransformSpace> TransformSpace);
    
    UFUNCTION(BlueprintCallable)
    static void RotateToTargetInstantlyYawOnly(AActor* actorToRotate, const FVector TargetPos, const ETeleportType TeleportType);
    
    UFUNCTION(BlueprintCallable)
    static void ReleaseIKRigAssets(ARsCharacter* characterActor);
    
    UFUNCTION(BlueprintCallable)
    static void RandomShufflerInit(UPARAM(Ref) FRandomShuffler& Shuffler, int32 Max);
    
    UFUNCTION(BlueprintCallable)
    static int32 RandomShufflerGetNext(UPARAM(Ref) FRandomShuffler& Shuffler);
    
    UFUNCTION(BlueprintCallable)
    static void PlayerAttackSequence(const UDataTable* AttackTable, const UDataTable* OverrideTable, const FName NextAttackOverride, const UDataTable* ForceMeterTable, AActor* Target, ASwHero* Hero, UPARAM(Ref) FCombatAttackTableRow& InOutAttackRow, float OverrideStartTime);
    
    UFUNCTION(BlueprintCallable)
    static void PlayerAltAttackSequence(const UDataTable* AttackTable, const UDataTable* ForceMeterTable, AActor* Target, ASwHero* Hero, UPARAM(Ref) FCombatAttackTableRow& InOutAttackRow);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void KillZTarget(UObject* WorldContext, bool bUseDamageSystem, bool bSkipDeathAnimation);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool IsSpeederBikeSyncFinished(UObject* WorldContext, const FSwSpeederBikeSyncID& SyncID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsForceMeterEmpty(const AActor* Target);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool IsActorInSpeederBikeSync(UObject* WorldContext, AActor* actorToCheck);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAbilitySystemEnabled();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UPrimitiveComponent* GetVisiblePrimitiveForHeroVehicle(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static URsAbility* GetUserAbilityInPlay(AActor* InActor, TSubclassOf<URsAbility> InAbilityType, bool bInPrecise);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static USwHighlightManager* GetSwHighlightManager(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AR4PlayerController* GetR4PlayerController(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ERsAttackerDirection GetPlayerInputRelativeDirection(const ARsPlayerController* playerCtrl);
    
    UFUNCTION(BlueprintCallable)
    static float GetFirstHitCollisionTime(UAnimSequenceBase* Animation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static ASwAIBuddyDroid* GetBuddyDroid(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetBestTargetForPOV(const AActor* searchActor, const FVector& SearchLocation, const FVector& searchDirection, USwTargetingProfile* profile, const TArray<AActor*>& Targets, const TArray<AActor*>& ignoreTargets, bool forSoftTarget);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetBestTargetForPlayer(const ARsPlayerController* playerCtrl, const TArray<AActor*>& Targets, const TArray<AActor*>& ignoreTargets, float maxDist, float maxDistMultiplier, float MaxAngle, float ProximityWeight, bool forSoftTarget);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetBestTargetForCamera(const ARsPlayerController* playerCtrl, const TArray<AActor*>& Targets, const TArray<AActor*>& ignoreTargets, float maxDist, float maxDistMultiplier, float MaxAngle, float ProximityWeight, bool forSoftTarget);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetBestTarget(const AActor* searchActor, USwTargetingProfile* profile, const TArray<AActor*>& Targets, const TArray<AActor*>& ignoreTargets, bool forSoftTarget);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetBestSwitchTargetForCamera(const ARsPlayerController* playerCtrl, const FVector& inputDir, const AActor* CurrentTarget, const TArray<AActor*>& Targets, const TArray<AActor*>& ignoreTargets, float maxDist, float maxDistMultiplier, float MaxAngle, float ProximityWeight, bool allowObstructed);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static float GetActiveButtonMashProgress(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static float GetActiveButtonMashBlendSpacePct(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static void ForceRefeshBoneTransforms(ArsActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void FinishActiveButtonMashSequence(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static void DetachRsActorFromParent(ArsActor* Actor, bool EnableMotionModel);
    
    UFUNCTION(BlueprintCallable)
    static void DeactivateIKRigConversion(ARsCharacter* characterActor);
    
    UFUNCTION(BlueprintCallable)
    static FRotator CalculateRotationToCameraFromSocket(const USceneComponent* componentAttachedTo, const FName& SocketName, const FVector& forwardVector);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CalculateBallisticTrajectory(UObject* WorldContextObject, const FVector& StartLocation, const FVector& DestinationLocation, float DesiredLateralSpeed, FRotator& Trajectory, float& InitalSpeed, float GravityScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakButtonMashParameters(const FSwButtonMashConfiguration& InParameters, FName& InputAction, int32& NumPressToSucceed, bool& bDeferEvents, TEnumAsByte<EButtonMashLengthType>& DurationTypeEnum, float& Duration, FName& NotifyIdentifier, int32& SyncGroupID, FButtonMashSyncGroupParameters& SyncGroupData, float& AutoSucceedDuration);
    
    UFUNCTION(BlueprintCallable)
    static void AttachRsActorToComponent(USceneComponent* Parent, ArsActor* Actor, FName SocketName, bool DisableMotionModel);
    
    UFUNCTION(BlueprintCallable)
    static bool AINextAttackSequence(ARsCharacter* Attacker, const UDataTable* AttackTable, TEnumAsByte<ERsCombatDefenseSuccessType> DefenseType, UPARAM(Ref) FAICombatAttackTableRow& InOutAttackRow, FRsCharacterAnimationData& NextAnimation, TSubclassOf<URsAbility>& AbilityType);
    
    UFUNCTION(BlueprintCallable)
    static bool AIAttackSequence(ARsCharacter* Attacker, const UDataTable* AttackTable, FName RowName, FAICombatAttackTableRow& AttackRow, FRsCharacterAnimationData& SequenceAnimation);
    
    UFUNCTION(BlueprintCallable)
    static void ActivateIKRigConversion(ARsCharacter* characterActor, const FName DesiredIKRigConversionName);
    
};

