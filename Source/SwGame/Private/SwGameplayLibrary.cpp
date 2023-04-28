#include "SwGameplayLibrary.h"
#include "Templates/SubclassOf.h"

void USwGameplayLibrary::StopSpeederBikeSync(UObject* WorldContext, const FSwSpeederBikeSyncID& SyncID, const float MontagesBlendOutTime) {
}

void USwGameplayLibrary::StopDrivingVehicle(UObject* WorldContext) {
}

void USwGameplayLibrary::StopActiveButtonMashSequence(UObject* WorldContext) {
}

FSwSpeederBikeSyncID USwGameplayLibrary::StartSpeederBikeSync(UObject* WorldContext, const FSwSpeederBikeSyncParameters& SyncParameters) {
    return FSwSpeederBikeSyncID{};
}

void USwGameplayLibrary::StartSaberClash(UObject* WorldContext, URsSyncDefinition* ClashSync, AActor* ClashActor, float ButtonMashDuration, float ClashDuration, float OscillationsPerSecond, float ApprovableClashStart, float MinApprovableClashArea, float MaxApprovableClashArea, int32 MaxButtonMashes, FName ClashFinishAction) {
}

void USwGameplayLibrary::StartDrivingVehicle(UObject* WorldContext, AActor* VehicleActor) {
}

void USwGameplayLibrary::StartButtonMashSequenceForSyncGroup(UObject* WorldContext, FName InputAction, bool bDeferEvents, int32 SyncGroupID, const FButtonMashSyncGroupParameters& SyncGroupData, const FButtonMashEvent& OnEnd, const FButtonMashEvent& OnButtonPress, const FButtonMashEvent& OnSuccess, const FButtonMashEvent& OnFail, float AccessibilityAutoSucceedDuration, float AccessibilityHoldTimeToSucceed) {
}

void USwGameplayLibrary::StartButtonMashSequenceDurationBased(UObject* WorldContext, FName InputAction, int32 NumPressesToSucceed, float PressHoldTimeToSucceed, bool bDeferEvents, float Duration, const FButtonMashEvent& OnEnd, const FButtonMashEvent& OnButtonPress, const FButtonMashEvent& OnSuccess, const FButtonMashEvent& OnFail, float AccessibilityAutoSucceedDuration, float AccessibilityHoldTimeToSucceed) {
}

void USwGameplayLibrary::StartButtonMashSequenceAnimNotifyBased(UObject* WorldContext, FName InputAction, int32 NumPressesToSucceed, float PressHoldTimeToSucceed, bool bDeferEvents, FName NotifyIdentifier, const FButtonMashEvent& OnEnd, const FButtonMashEvent& OnButtonPress, const FButtonMashEvent& OnSuccess, const FButtonMashEvent& OnFail, float AccessibilityAutoSucceedDuration, float AccessibilityHoldTimeToSucceed) {
}

URsCameraModeDefinition* USwGameplayLibrary::SetZTargetCameraForTarget2(AR4PlayerController* playerCtrl, AActor* Target, int32 CameraModePriority) {
    return NULL;
}

FName USwGameplayLibrary::SetZTargetCameraForTarget(AR4PlayerController* playerCtrl, AActor* Target, int32 CameraModePriority) {
    return NAME_None;
}

bool USwGameplayLibrary::SetForcePushAttackRow(const UDataTable* AttackTable, FCombatAttackTableRow& InOutAttackRow) {
    return false;
}

FTransform USwGameplayLibrary::RsGetSocketTransformFromHierarcy(USkinnedMeshComponent* Target, FName InSocketName, TEnumAsByte<ERelativeTransformSpace> TransformSpace) {
    return FTransform{};
}

void USwGameplayLibrary::RotateToTargetInstantlyYawOnly(AActor* actorToRotate, const FVector TargetPos, const ETeleportType TeleportType) {
}

void USwGameplayLibrary::ReleaseIKRigAssets(ARsCharacter* characterActor) {
}

void USwGameplayLibrary::RandomShufflerInit(FRandomShuffler& Shuffler, int32 Max) {
}

int32 USwGameplayLibrary::RandomShufflerGetNext(FRandomShuffler& Shuffler) {
    return 0;
}

void USwGameplayLibrary::PlayerAttackSequence(const UDataTable* AttackTable, const UDataTable* OverrideTable, const FName NextAttackOverride, const UDataTable* ForceMeterTable, AActor* Target, ASwHero* Hero, FCombatAttackTableRow& InOutAttackRow, float OverrideStartTime) {
}

void USwGameplayLibrary::PlayerAltAttackSequence(const UDataTable* AttackTable, const UDataTable* ForceMeterTable, AActor* Target, ASwHero* Hero, FCombatAttackTableRow& InOutAttackRow) {
}

void USwGameplayLibrary::KillZTarget(UObject* WorldContext, bool bUseDamageSystem, bool bSkipDeathAnimation) {
}

bool USwGameplayLibrary::IsSpeederBikeSyncFinished(UObject* WorldContext, const FSwSpeederBikeSyncID& SyncID) {
    return false;
}

bool USwGameplayLibrary::IsForceMeterEmpty(const AActor* Target) {
    return false;
}

bool USwGameplayLibrary::IsActorInSpeederBikeSync(UObject* WorldContext, AActor* actorToCheck) {
    return false;
}

bool USwGameplayLibrary::IsAbilitySystemEnabled() {
    return false;
}

UPrimitiveComponent* USwGameplayLibrary::GetVisiblePrimitiveForHeroVehicle(UObject* WorldContext) {
    return NULL;
}

URsAbility* USwGameplayLibrary::GetUserAbilityInPlay(AActor* InActor, TSubclassOf<URsAbility> InAbilityType, bool bInPrecise) {
    return NULL;
}

USwHighlightManager* USwGameplayLibrary::GetSwHighlightManager(const UObject* WorldContext) {
    return NULL;
}

AR4PlayerController* USwGameplayLibrary::GetR4PlayerController(const UObject* WorldContextObject) {
    return NULL;
}

ERsAttackerDirection USwGameplayLibrary::GetPlayerInputRelativeDirection(const ARsPlayerController* playerCtrl) {
    return ERsAttackerDirection::None;
}

float USwGameplayLibrary::GetFirstHitCollisionTime(UAnimSequenceBase* Animation) {
    return 0.0f;
}

ASwAIBuddyDroid* USwGameplayLibrary::GetBuddyDroid(UObject* WorldContext) {
    return NULL;
}

AActor* USwGameplayLibrary::GetBestTargetForPOV(const AActor* searchActor, const FVector& SearchLocation, const FVector& searchDirection, USwTargetingProfile* profile, const TArray<AActor*>& Targets, const TArray<AActor*>& ignoreTargets, bool forSoftTarget) {
    return NULL;
}

AActor* USwGameplayLibrary::GetBestTargetForPlayer(const ARsPlayerController* playerCtrl, const TArray<AActor*>& Targets, const TArray<AActor*>& ignoreTargets, float maxDist, float maxDistMultiplier, float MaxAngle, float ProximityWeight, bool forSoftTarget) {
    return NULL;
}

AActor* USwGameplayLibrary::GetBestTargetForCamera(const ARsPlayerController* playerCtrl, const TArray<AActor*>& Targets, const TArray<AActor*>& ignoreTargets, float maxDist, float maxDistMultiplier, float MaxAngle, float ProximityWeight, bool forSoftTarget) {
    return NULL;
}

AActor* USwGameplayLibrary::GetBestTarget(const AActor* searchActor, USwTargetingProfile* profile, const TArray<AActor*>& Targets, const TArray<AActor*>& ignoreTargets, bool forSoftTarget) {
    return NULL;
}

AActor* USwGameplayLibrary::GetBestSwitchTargetForCamera(const ARsPlayerController* playerCtrl, const FVector& inputDir, const AActor* CurrentTarget, const TArray<AActor*>& Targets, const TArray<AActor*>& ignoreTargets, float maxDist, float maxDistMultiplier, float MaxAngle, float ProximityWeight, bool allowObstructed) {
    return NULL;
}

float USwGameplayLibrary::GetActiveButtonMashProgress(UObject* WorldContext) {
    return 0.0f;
}

float USwGameplayLibrary::GetActiveButtonMashBlendSpacePct(UObject* WorldContext) {
    return 0.0f;
}

void USwGameplayLibrary::ForceRefeshBoneTransforms(ArsActor* Actor) {
}

void USwGameplayLibrary::FinishActiveButtonMashSequence(UObject* WorldContext) {
}

void USwGameplayLibrary::DetachRsActorFromParent(ArsActor* Actor, bool EnableMotionModel) {
}

void USwGameplayLibrary::DeactivateIKRigConversion(ARsCharacter* characterActor) {
}

FRotator USwGameplayLibrary::CalculateRotationToCameraFromSocket(const USceneComponent* componentAttachedTo, const FName& SocketName, const FVector& forwardVector) {
    return FRotator{};
}

void USwGameplayLibrary::CalculateBallisticTrajectory(UObject* WorldContextObject, const FVector& StartLocation, const FVector& DestinationLocation, float DesiredLateralSpeed, FRotator& Trajectory, float& InitalSpeed, float GravityScale) {
}

void USwGameplayLibrary::BreakButtonMashParameters(const FSwButtonMashConfiguration& InParameters, FName& InputAction, int32& NumPressToSucceed, bool& bDeferEvents, TEnumAsByte<EButtonMashLengthType>& DurationTypeEnum, float& Duration, FName& NotifyIdentifier, int32& SyncGroupID, FButtonMashSyncGroupParameters& SyncGroupData, float& AutoSucceedDuration) {
}

void USwGameplayLibrary::AttachRsActorToComponent(USceneComponent* Parent, ArsActor* Actor, FName SocketName, bool DisableMotionModel) {
}

bool USwGameplayLibrary::AINextAttackSequence(ARsCharacter* Attacker, const UDataTable* AttackTable, TEnumAsByte<ERsCombatDefenseSuccessType> DefenseType, FAICombatAttackTableRow& InOutAttackRow, FRsCharacterAnimationData& NextAnimation, TSubclassOf<URsAbility>& AbilityType) {
    return false;
}

bool USwGameplayLibrary::AIAttackSequence(ARsCharacter* Attacker, const UDataTable* AttackTable, FName RowName, FAICombatAttackTableRow& AttackRow, FRsCharacterAnimationData& SequenceAnimation) {
    return false;
}

void USwGameplayLibrary::ActivateIKRigConversion(ARsCharacter* characterActor, const FName DesiredIKRigConversionName) {
}

USwGameplayLibrary::USwGameplayLibrary() {
    // Null default object.
}

