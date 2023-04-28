#include "RsGameplayStatics.h"
#include "Templates/SubclassOf.h"

void URsGameplayStatics::WaitForStreamingAreaToLoad(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, FName StreamingArea, bool bPauseGame, bool bWaitForNonVisibleLevels, bool bWaitForLODLevels, FName OptionalLevelContainer) {
}

void URsGameplayStatics::UnloadStreamingArea(const UObject* WorldContextObject, FName StreamingArea, FLatentActionInfo LatentInfo) {
}

void URsGameplayStatics::UnloadStandaloneStreamingLevel(const UObject* WorldContextObject, const URsStreamingDefinition* StreamingLevelDefinition, FLatentActionInfo LatentInfo) {
}

void URsGameplayStatics::UnloadAllStreamingAreas(const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void URsGameplayStatics::UnloadAllStandaloneStreamingLevels(const UObject* WorldContextObject) {
}

void URsGameplayStatics::TeleportLoad(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, FName PlayerStartName) {
}

void URsGameplayStatics::SyncActorsFromDefinitionHelper(const FTransform& Transform, URsSyncDefinition* SyncDefinition, AActor* Master, const FVector2D& MasterBlendSpaceInput, const TArray<AActor*>& Actors, const TArray<FVector2D>& SlaveBlendSpaceinputs, UAnimationAsset* OverrideAnimation, URsMasterSyncInstance*& MasterInstance, TArray<URsSlaveSyncInstance*>& SlaveInstanceArray) {
}

int32 URsGameplayStatics::SyncActorsFromDefinitionBasic(UObject* WorldContext, URsSyncDefinition* SyncDefinition, AActor* Master, AActor* Slave) {
    return 0;
}

int32 URsGameplayStatics::SyncActorsFromDefinitionAtLocation(UObject* WorldContext, URsSyncDefinition* SyncDefinition, const FTransform& Transform, const TArray<AActor*>& Actors, UAnimationAsset* OverrideAnimation, URsMasterSyncInstance*& MasterInstance, TArray<URsSlaveSyncInstance*>& SlaveInstanceArray, const TArray<FVector2D>& SlaveBlendSpaceinputs) {
    return 0;
}

int32 URsGameplayStatics::SyncActorsFromDefinition(UObject* WorldContext, URsSyncDefinition* SyncDefinition, AActor* Master, const TArray<AActor*>& Actors, UAnimationAsset* OverrideAnimation, URsMasterSyncInstance*& MasterInstance, TArray<URsSlaveSyncInstance*>& SlaveInstanceArray, const FVector2D& MasterBlendSpaceInput, const TArray<FVector2D>& SlaveBlendSpaceinputs) {
    return 0;
}

int32 URsGameplayStatics::SyncActors(UObject* WorldContext, URsMasterSyncInstance* MasterInstance, TArray<URsSlaveSyncInstance*> SlaveInstanceArray, TEnumAsByte<ERsBreakSyncType> BreakOnMontageEnd, TEnumAsByte<ERsBreakSyncType> BreakOnTakeDamage) {
    return 0;
}

void URsGameplayStatics::StopMontagesAndEndNotifyStates(UAnimInstance* AnimInstance, const float BlendOutTime) {
}

void URsGameplayStatics::StopMontageAndEndNotifyStates(UAnimInstance* AnimInstance, UAnimMontage* Montage, float BlendOutTime) {
}

void URsGameplayStatics::StopHintingAtTeleportingPositionForStreaming(const UObject* WorldContextObject, FVector Position, bool bClearOverrideForPortalCalculations) {
}

void URsGameplayStatics::StopDamageOverTime(AActor* DamagedActor) {
}

void URsGameplayStatics::StartHintingAtTeleportingPositionForStreaming(const UObject* WorldContextObject, FVector Position, bool bOverrideForPortalCalculations) {
}

void URsGameplayStatics::StartDamageOverTime(AActor* DamagedActor, float DamagePerTick, float DamageDuration, float DamageTickRate, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass) {
}

UDecalComponent* URsGameplayStatics::SpawnDecalAtLocationWithNormal(const UObject* WorldContextObject, UMaterialInterface* DecalMaterial, FVector DecalSize, FVector Location, FVector DecalNormal, float RotationAroundNormal, float LifeSpan) {
    return NULL;
}

AActor* URsGameplayStatics::SpawnActorAtSocket(AActor* SpawnerActor, FName SocketName, TSubclassOf<AActor> SpawnActorClass, FVector LocalSpawnImpulse, FVector LocalSpawnAngularImpulse, float LifeSpan, UParticleSystem* ParticleSystemClass) {
    return NULL;
}

void URsGameplayStatics::SortActorsByDistance(UObject* WorldContext, AActor* DistanceToActor, TArray<AActor*> ActorsToSort, TArray<AActor*>& SortedActors) {
}

void URsGameplayStatics::ShowDismemberMeshComponent(USkinnedMeshComponent* SkinnedMeshComponent, USkinnedMeshComponent* SourceMeshComponent, bool NewConvertToRagdoll, UAnimationAsset* AnimationToPlay) {
}

bool URsGameplayStatics::ShouldDeferCineStart() {
    return false;
}

bool URsGameplayStatics::SetWorldRootLevel(const UObject* WorldContextObject, const URsStreamingDefinition* StreamingLevelDefinition) {
    return false;
}

void URsGameplayStatics::SetStreamingPortalProcessingState(const UObject* WorldContextObject, bool bDisallowLoading, bool bDisallowUnloading, bool bDisallowStateChange, bool bReturnToNormalOnNewRoot) {
}

void URsGameplayStatics::SetStreamingArea(const UObject* WorldContextObject, FName StreamingArea) {
}

bool URsGameplayStatics::SetRootLevel(const UObject* WorldContextObject, const URsStreamingDefinition* StreamingLevelDefinition, FName StreamingArea) {
    return false;
}

void URsGameplayStatics::SetPlayRateForRelevantMontage(UAnimInstance* AnimInstance, UAnimSequenceBase* Animation, float NewPlayRate) {
}

void URsGameplayStatics::SetMaxHealth(ARsCharacter* Character, float MaxHealth, bool bUpdateCurrentHealth) {
}

void URsGameplayStatics::SetLoadedStreamingArea(const UObject* WorldContextObject, FName StreamingArea, FName InitialLoadToken, const FString& OptionalLoadOrder, FLatentActionInfo LatentInfo) {
}

void URsGameplayStatics::SetLevelTransform(const UObject* WorldContextObject, const URsStreamingDefinition* StreamingLevelDefinition, FTransform LevelTransform) {
}

void URsGameplayStatics::SetLevelSequenceActorTransformForDynamicStartPoint(const UObject* WorldContextObject) {
}

void URsGameplayStatics::SetHealth(ARsCharacter* Character, float Health, bool SetIfDead) {
}

void URsGameplayStatics::SetEnableMotionModel(ARsCharacter* Character, bool enable) {
}

void URsGameplayStatics::SetCanDie(ARsCharacter* Character, bool bCanDie) {
}

void URsGameplayStatics::SetCanBeTargeted(AActor* Actor, bool bCanBetargeted) {
}

void URsGameplayStatics::SetCanBePlayerZTargeted(AActor* Actor, bool bCanBePlayerZTargeted) {
}

void URsGameplayStatics::SetActiveOnlinePlayerController(APlayerController* PlayerController) {
}

void URsGameplayStatics::SeperateFromMasterPoseComponent(USkinnedMeshComponent* SkinnedMeshComponent, bool NewConvertToRagdoll, UAnimationAsset* AnimationToPlay) {
}

FGameplayTag URsGameplayStatics::SelectSmartTag(AActor* Actor, FGameplayTag ParentTag) {
    return FGameplayTag{};
}

void URsGameplayStatics::RsSetImpactEffectTable(UObject* WorldContextObject, UDataTable* ImpactEffectsSurface, UDataTable* ImpactEffectsCharacter) {
}

bool URsGameplayStatics::RsIsLightsaberAttackType(const UObject* WorldContextObject, FName AttackType) {
    return false;
}

void URsGameplayStatics::RsImpactEffectOnGround(UObject* WorldContextObject, FName AttackType, const FVector& Location) {
}

void URsGameplayStatics::RsImpactEffectFromSweepImpactNormal(UObject* WorldContextObject, const FHitResult& HitSweep, FName AttackType, ERsDamageEffectType DamageEffectType) {
}

void URsGameplayStatics::RsImpactEffectFromSweep(UObject* WorldContextObject, const FHitResult& HitSweep, FName AttackType, ERsDamageEffectType DamageEffectType) {
}

void URsGameplayStatics::RsImpactEffectFromDamageParams(UObject* WorldContextObject, AActor* DamagedActor, USceneComponent* DamagedComponent, const FRsDamageParams& DamageParams, ERsDamageEffectType DamageEffectType, AActor* DamageCauser) {
}

void URsGameplayStatics::RsImpactEffect(UObject* WorldContextObject, AActor* DamagedActor, USceneComponent* DamagedComponent, FName AttachSocket, FName AttackType, ERsDamageEffectType DamageEffectType, TEnumAsByte<EPhysicalSurface> SurfaceType, const FVector& Location, const FVector& FXDir, AActor* Instigator) {
}

ARsHero* URsGameplayStatics::RsGetPlayerHero(const UObject* WorldContextObject) {
    return NULL;
}

ARsPlayerController* URsGameplayStatics::RsGetPlayerController(const UObject* WorldContextObject) {
    return NULL;
}

ARsCharacter* URsGameplayStatics::RsGetPlayerCharacter(const UObject* WorldContextObject) {
    return NULL;
}

ARsCameraManager* URsGameplayStatics::RsGetPlayerCameraManager(const UObject* WorldContextObject) {
    return NULL;
}

ARsCharacter* URsGameplayStatics::RsGetComponentCharacter(const UActorComponent* Component) {
    return NULL;
}

bool URsGameplayStatics::RsApplyRadialDamageWithFalloff(float BaseDamage, float MinimumDamage, const FVector& origin, float DamageInnerRadius, float DamageOuterRadius, TSubclassOf<UDamageType> DamageTypeClass, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, const FRsHitEvent& HitEvent) {
    return false;
}

bool URsGameplayStatics::RsApplyRadialDamage(float BaseDamage, const FVector& origin, float DamageRadius, TSubclassOf<UDamageType> DamageTypeClass, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, const FRsHitEvent& HitEvent) {
    return false;
}

float URsGameplayStatics::RsApplyDamageSeparateActor(const FHitResult& HitSweep, const URsDamageType* DamageType, ARsCharacter* DamageCauser, AActor* DamageCauseActor, UPrimitiveComponent* DamageCausingComponent) {
    return 0.0f;
}

float URsGameplayStatics::RsApplyDamageFromSweep(const FHitResult& HitSweep, float BaseDamage, ARsCharacter* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass, FName AttackType) {
    return 0.0f;
}

float URsGameplayStatics::RsApplyDamageFromHitEventSeparateActor(const FHitResult& HitSweep, const FRsHitEvent& HitEvent, ARsCharacter* DamageCauser, AActor* DamageCauseActor) {
    return 0.0f;
}

float URsGameplayStatics::RsApplyDamageFromHitEvent(const FHitResult& HitSweep, const FRsHitEvent& HitEvent, ARsCharacter* DamageCauser) {
    return 0.0f;
}

float URsGameplayStatics::RsApplyDamageFromDamageType(const FHitResult& HitSweep, const URsDamageType* DamageType, ARsCharacter* DamageCauser, UPrimitiveComponent* DamageCausingComponent) {
    return 0.0f;
}

float URsGameplayStatics::RsApplyDamage(AActor* DamagedActor, UPrimitiveComponent* DamagedComponent, float BaseDamage, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass, const FRsDamageParams& DamageParams) {
    return 0.0f;
}

void URsGameplayStatics::RotateToVector(AActor* Actor, const FVector& Direction, float Offset) {
}

void URsGameplayStatics::RotateToTargetWithMax(AActor* ActorStart, AActor* ActorTarget, float Offset, float MaxAmount) {
}

void URsGameplayStatics::RotateToTargetImmediate(AActor* ActorStart, AActor* ActorTarget, float RotateAmount, bool immediate) {
}

void URsGameplayStatics::RotateToTarget(AActor* ActorStart, AActor* ActorTarget, float RotateAmount) {
}

void URsGameplayStatics::ReturnStreamingPortalProcessingToNormal(const UObject* WorldContextObject) {
}

void URsGameplayStatics::RestartWorldWithPlayerStartName(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, URsStreamingDefinition* StreamingLevelDefinition, FName PlayerStartName, bool bAllowLoadoutOverride) {
}

void URsGameplayStatics::RestartWorld(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, AActor* AtPlayerStart, bool bAllowLoadoutOverride) {
}

void URsGameplayStatics::ResetHealthToMax(ARsCharacter* Character, bool SetIfDead) {
}

void URsGameplayStatics::ResetAllRopePhysics() {
}

void URsGameplayStatics::RequestAllStreamingToFinishToUnpause(const UObject* WorldContextObject) {
}

void URsGameplayStatics::RemoveForcedStateFromStreamingAreas(const UObject* WorldContextObject, const TArray<FName>& StreamingAreas) {
}

bool URsGameplayStatics::RemoveCorpse(ARsAICharacter* Corpse, bool bFade) {
    return false;
}

void URsGameplayStatics::RemoveAllCorpses(UObject* WorldContext, bool bFade) {
}

void URsGameplayStatics::ReloadStreamingLevel(const UObject* WorldContextObject, URsStreamingDefinition* StreamingLevelDefinition) {
}

void URsGameplayStatics::ReclaimParticlePools(UObject* WorldContext) {
}

void URsGameplayStatics::PrestreamTextures(const USkeletalMesh* SkeletalMesh, float Seconds) {
}

void URsGameplayStatics::PreStreamMeshTextures(const UStaticMesh* StaticMesh, float Seconds) {
}

void URsGameplayStatics::PreloadStreamingArea(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, FName StreamingArea, TEnumAsByte<ERsDesiredLevelLoadState> DesiredLoadState) {
}

void URsGameplayStatics::PreloadRootLevelWithMultipleAreas(const UObject* WorldContextObject, const URsStreamingDefinition* StreamingLevelDefinition, const TArray<FName>& StreamingAreasToLoad, FLatentActionInfo LatentInfo, TEnumAsByte<ERsDesiredLevelLoadState> DesiredLoadState, bool bSkipVistaLevels) {
}

void URsGameplayStatics::PreloadRootLevel(const UObject* WorldContextObject, const URsStreamingDefinition* StreamingLevelDefinition, FName StreamingArea, FLatentActionInfo LatentInfo, TEnumAsByte<ERsDesiredLevelLoadState> DesiredLoadState, bool bSkipVistaLevels) {
}

void URsGameplayStatics::OverrideStreamingAreaVistaVisibility(const UObject* WorldContextObject, bool bHideVistas) {
}

void URsGameplayStatics::LoseHealth(ARsCharacter* Character, float Amount) {
}

void URsGameplayStatics::LogTelemetryStat_Int(const UObject* WorldContextObject, FName StatName, int32 StatValue) {
}

void URsGameplayStatics::LogTelemetryStat_Float(const UObject* WorldContextObject, FName StatName, float StatValue) {
}

void URsGameplayStatics::LogTelemetryEventAtLocation(const UObject* WorldContextObject, FName EventName, FVector Location, TArray<FRsTelemetryValue_Float> AdditionalFloatParameters, TArray<FRsTelemetryValue_Int> AdditionalIntegerParameters, TArray<FRsTelemetryValue_Boolean> AdditionalBooleanParameters, TArray<FRsTelemetryValue_IndexedString> AdditionalIndexedStringParameters, TArray<FRsTelemetryValue_String> AdditionalStringParameters) {
}

void URsGameplayStatics::LogTelemetryEvent(const UObject* WorldContextObject, FName EventName, TArray<FRsTelemetryValue_Float> AdditionalFloatParameters, TArray<FRsTelemetryValue_Int> AdditionalIntegerParameters, TArray<FRsTelemetryValue_Boolean> AdditionalBooleanParameters, TArray<FRsTelemetryValue_IndexedString> AdditionalIndexedStringParameters, TArray<FRsTelemetryValue_String> AdditionalStringParameters) {
}

void URsGameplayStatics::LoadWorld(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, FName WorldName, FName PlayerStartName, bool bAllowLoadoutOverride) {
}

void URsGameplayStatics::LoadStreamingArea(const UObject* WorldContextObject, FName StreamingArea, FName InitialLoadToken, bool bShouldBlockOnLoad, const FString& OptionalLoadOrder, FLatentActionInfo LatentInfo) {
}

void URsGameplayStatics::LoadStandaloneStreamingLevel(const UObject* WorldContextObject, const URsStreamingDefinition* StreamingLevelDefinition, TEnumAsByte<ERsDesiredLevelLoadState> DesiredLoadState, FName InitialLoadToken, FLatentActionInfo LatentInfo) {
}

void URsGameplayStatics::LoadPlayerStartListForWorld(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, FName WorldName) {
}

void URsGameplayStatics::LoadPlayerStartLevels(const UObject* WorldContextObject, const URsStreamingDefinition* StreamingLevelDefinition, FName PlayerStartName, FLatentActionInfo LatentInfo) {
}

void URsGameplayStatics::KillCharacter(ARsCharacter* Character, AController* EventInstigator, AActor* DamageCauser, bool bUseDamageSystem, bool bSkipDeathAnimation, bool bCleanupImmediately) {
}

bool URsGameplayStatics::K2_RsApplyRadialDamageWithFalloff(float BaseDamage, float MinimumDamage, const FVector& origin, float DamageInnerRadius, float DamageOuterRadius, const URsDamageType* DamageType, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, bool bFaceDamageCauser) {
    return false;
}

bool URsGameplayStatics::K2_RsApplyRadialDamage(float BaseDamage, const FVector& origin, float DamageRadius, const URsDamageType* DamageType, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, bool bFaceDamageCauser) {
    return false;
}

float URsGameplayStatics::K2_RsApplyDamageFromSweep(const FHitResult& HitSweep, float BaseDamage, ARsCharacter* DamageCauser, const URsDamageType* DamageType) {
    return 0.0f;
}

float URsGameplayStatics::K2_RsApplyDamage(AActor* DamagedActor, UPrimitiveComponent* DamagedComponent, float BaseDamage, AController* EventInstigator, AActor* DamageCauser, const URsDamageType* DamageType, const FRsDamageParams& DamageParams) {
    return 0.0f;
}

void URsGameplayStatics::K2_InflictDamage(ARsCharacter* Character, float Damage, const URsDamageType* DamageType) {
}

bool URsGameplayStatics::IsTelemetryEnabled(const UObject* WorldContextObject) {
    return false;
}

bool URsGameplayStatics::IsStreamingLevelLoaded(const UObject* WorldContextObject, URsStreamingDefinition* StreamingLevelDefinition) {
    return false;
}

bool URsGameplayStatics::IsObjectOfClass(UObject* InObject, const TSoftClassPtr<UObject>& InClassToCheck) {
    return false;
}

bool URsGameplayStatics::IsLevelStreamingInProgress(const UObject* WorldContextObject) {
    return false;
}

bool URsGameplayStatics::IsIKRigActive(ARsCharacter* Character) {
    return false;
}

bool URsGameplayStatics::IsCurrentRootLevel(const UObject* WorldContextObject, const URsStreamingDefinition* StreamingLevelDefinition) {
    return false;
}

bool URsGameplayStatics::IsCinematicEndInCombatState(UMovieSceneSequence* MovieSceneSequence) {
    return false;
}

bool URsGameplayStatics::IsCharacterOfType(const ARsCharacter* Character, TEnumAsByte<ERsCharacterType> CharacterType) {
    return false;
}

bool URsGameplayStatics::IsAlive(ARsCharacter* Character) {
    return false;
}

bool URsGameplayStatics::IsActorSyncingWithPlayer(UObject* WorldContext, AActor* SyncActor) {
    return false;
}

bool URsGameplayStatics::IsActorSyncing(UObject* WorldContext, AActor* SyncActor) {
    return false;
}

bool URsGameplayStatics::IsActorOfType(const AActor* Actor, TEnumAsByte<ERsCharacterType> CharacterType) {
    return false;
}

void URsGameplayStatics::InflictDamage(ARsCharacter* Character, float Damage, TSubclassOf<UDamageType> DamageType) {
}

bool URsGameplayStatics::InEditorAtEditTime(const UObject* WorldContextObject) {
    return false;
}

void URsGameplayStatics::HealCharacter(ARsCharacter* Character, float Amount) {
}

TArray<FName> URsGameplayStatics::GetWorldNameList(const UObject* WorldContextObject) {
    return TArray<FName>();
}

URsTargetableComponent* URsGameplayStatics::GetTargetableComponent(AActor* Actor) {
    return NULL;
}

URsSyncManager* URsGameplayStatics::GetSyncManager(UObject* WorldContext) {
    return NULL;
}

FName URsGameplayStatics::GetSurfaceTypeName(TEnumAsByte<EPhysicalSurface> SurfaceType) {
    return NAME_None;
}

void URsGameplayStatics::GetStreamingDefinitionForWorld(const UObject* WorldContextObject, FName WorldName, URsStreamingDefinition*& OutDefinition) {
}

void URsGameplayStatics::GetStreamingAreaNames(const UObject* WorldContextObject, TArray<FName>& OutAreaNames) {
}

void URsGameplayStatics::GetPlayerStartNames(const UObject* WorldContextObject, TArray<FName>& OutPlayerStartNames) {
}

TArray<FName> URsGameplayStatics::GetPlayerStartListForWorld(const UObject* WorldContextObject, FName WorldName) {
    return TArray<FName>();
}

ARsMissionObjectiveSystemBase* URsGameplayStatics::GetMissionObjectiveSystem(UObject* WorldContext) {
    return NULL;
}

float URsGameplayStatics::GetMaxHealth(ARsCharacter* Character) {
    return 0.0f;
}

FString URsGameplayStatics::GetLevelNameForActor(AActor* Actor) {
    return TEXT("");
}

float URsGameplayStatics::GetHealthFraction(ARsCharacter* Character) {
    return 0.0f;
}

float URsGameplayStatics::GetHealth(ARsCharacter* Character) {
    return 0.0f;
}

URsAIEncounterManager* URsGameplayStatics::GetEncounterManager(UObject* WorldContext) {
    return NULL;
}

TArray<FRsDialogueActorType> URsGameplayStatics::GetDialogueSpeakerList(UObject* WorldContextObject, TSoftObjectPtr<UDialogue> Dialogue) {
    return TArray<FRsDialogueActorType>();
}

FName URsGameplayStatics::GetCurrentStreamingArea(const UObject* WorldContextObject) {
    return NAME_None;
}

ERsAttackerDirection URsGameplayStatics::GetAttackerRelativeDirectionForHitVelocity(const AActor* Target, const FVector& Velicity) {
    return ERsAttackerDirection::None;
}

ERsAttackerDirection URsGameplayStatics::GetAttackerRelativeDirection(const AActor* Target, const AActor* Attacker) {
    return ERsAttackerDirection::None;
}

bool URsGameplayStatics::GetAnimationBoneTransform(USkeletalMeshComponent* InMesh, UAnimSequence* InAnim, FName InBoneName, float InAnimationTime, bool bSubtractRootMotion, FTransform& OutInitialAnimTransform) {
    return false;
}

bool URsGameplayStatics::GetActorTransformInLevelSequenceAtFirstFrame(FTransform& OutTransform, FVector& OutVelocity, ALevelSequenceActor* LevelSequenceActor, FName ActorTag) {
    return false;
}

bool URsGameplayStatics::GetActorTransformInLevelSequence(FTransform& OutTransform, FVector& OutVelocity, ALevelSequenceActor* LevelSequenceActor, FName ActorTag, int32 StartFrame) {
    return false;
}

FString URsGameplayStatics::GetActiveOnlinePlayerNickname(UObject* WorldContextObject) {
    return TEXT("");
}

APlayerController* URsGameplayStatics::GetActiveOnlinePlayerController() {
    return NULL;
}

bool URsGameplayStatics::GetAchievementNameByIndex(uint8 Index, FName& AchievementName) {
    return false;
}

void URsGameplayStatics::ForceStreamingAreasToBeVisible(const UObject* WorldContextObject, const TArray<FName>& StreamingAreas) {
}

void URsGameplayStatics::ForceSkeletalMeshLOD(int32 ForcedLOD, USkeletalMeshComponent* SkeletalMeshComponent) {
}

void URsGameplayStatics::ForceImmediateLevelsVisibilityUpdate(const UObject* WorldContextObject) {
}

ERsAttackerDirection URsGameplayStatics::FlipAttackerDirection(ERsAttackerDirection AttackerDirection) {
    return ERsAttackerDirection::None;
}

URsSyncInstance* URsGameplayStatics::FindSyncInstance(UObject* WorldContext, ARsCharacter* Character) {
    return NULL;
}

void URsGameplayStatics::EnablePhysicalAnimationProfile(AActor* TargetActor, const FRsPhysicalAnimationRuntimeProfileParameters& OperationParameters, const URsPhysicalAnimationProfile* InProfile) {
}

bool URsGameplayStatics::DoesStreamingAreaMeetStreamingState(const UObject* WorldContextObject, FName StreamingAreaName, TEnumAsByte<ERsStreamingState> DesiredStreamingState) {
    return false;
}

void URsGameplayStatics::DisablePhysicalAnimationImmediately(AActor* TargetActor, const FRsPhysicalAnimationRuntimeProfileParameters& OperationParameters) {
}

void URsGameplayStatics::DisablePhysicalAnimation(AActor* TargetActor, const FRsPhysicalAnimationRuntimeProfileParameters& OperationParameters) {
}

bool URsGameplayStatics::DetermineTargetToRight(AActor* ActorSelf, AActor* ActorTarget) {
    return false;
}

bool URsGameplayStatics::DetermineTargetBehind(AActor* ActorSelf, AActor* ActorTarget) {
    return false;
}

void URsGameplayStatics::DestroyCharacter(ARsCharacter* Character) {
}

void URsGameplayStatics::DeferEventUntilNextFrame(UObject* WorldContext, const FGenericBlueprintEvent& Event) {
}

URsSlaveSyncInstance* URsGameplayStatics::CreateSlaveSyncInstance(UObject* WorldContext, AActor* Actor, UAnimationAsset* Animation, FName BoneName, bool bEndSyncOnMontageBlendingOut) {
    return NULL;
}

URsMasterSyncInstance* URsGameplayStatics::CreateMasterSyncInstance(UObject* WorldContext, AActor* Actor, UAnimationAsset* Animation, FRsGeoLocator ConstraintLocator, bool bEndSyncOnMontageBlendingOut) {
    return NULL;
}

ARsConversation* URsGameplayStatics::CreateConversation(UObject* WorldContextObject, TSoftObjectPtr<UDialogue> Dialogue, const FGameplayTagContainer& InTemporaryTrueTags, TArray<AActor*> Actors, FGameplayTag EventContext, bool IsBackground) {
    return NULL;
}

void URsGameplayStatics::ConvertToRagdoll(AActor* Actor, const bool DisableColliders, const bool bDeferPhysicsStartUntilEndOfFrame) {
}

void URsGameplayStatics::ClearLevelTransform(const UObject* WorldContextObject, const URsStreamingDefinition* StreamingLevelDefinition) {
}

void URsGameplayStatics::ClearForcedVisibleStreamingAreas(const UObject* WorldContextObject) {
}

void URsGameplayStatics::ClearForcedSkeletalMeshLOD(USkeletalMeshComponent* SkeletalMeshComponent) {
}

void URsGameplayStatics::ClearAllHintingForStreamingTeleportingPosition(const UObject* WorldContextObject) {
}

FSyncTopologyRequestResult URsGameplayStatics::CheckSyncTopologyComplianceAtLocation(const FTransform& Transform, URsSyncDefinition* SyncDefinition, AActor* Master, TArray<AActor*> Slaves, UAnimationAsset* OverrideAnimation) {
    return FSyncTopologyRequestResult{};
}

FSyncTopologyRequestResult URsGameplayStatics::CheckSyncTopologyCompliance(URsSyncDefinition* SyncDefinition, AActor* Master, TArray<AActor*> Slaves, UAnimationAsset* OverrideAnimation) {
    return FSyncTopologyRequestResult{};
}

void URsGameplayStatics::CancelPreloadStreamingArea(const UObject* WorldContextObject, FName StreamingArea) {
}

float URsGameplayStatics::CameraEase(const FRsCameraEaseParams& EaseParams, float Begin, float End, float ALPHA) {
    return 0.0f;
}

void URsGameplayStatics::BreakSync(UObject* WorldContext, int32 SyncID) {
}

bool URsGameplayStatics::BreakFirstSync(UObject* WorldContext, AActor* Actor) {
    return false;
}

void URsGameplayStatics::BreakActorInSync(UObject* WorldContext, AActor* Actor, int32 SyncID) {
}

void URsGameplayStatics::BlueprintError(const UObject* WorldContextObject, const FString& Error) {
}

bool URsGameplayStatics::AnyCorpsesInRadius(AActor* InActor, float InRadius) {
    return false;
}

void URsGameplayStatics::AIReturnHomeAndGoToSleepAll(UObject* WorldContextObject, const TArray<ARsAICharacter*>& InCharactersToExclude, const TArray<TSubclassOf<ARsAICharacter>>& InCharactersClassesToExclude, TArray<FGoHomeAndSleepEntry>& OutProcessedActors, float MaxDistance, bool bInSendHomeNonHostile, bool bInSentHomeUnawareCharacters, bool bStoreHeroAwareness) {
}

void URsGameplayStatics::AIAwakeAndForceAwarenessInRadius(UObject* WorldContextObject, const TArray<FGoHomeAndSleepEntry>& InAIToAwake, const FVector& origin, float Radius) {
}

void URsGameplayStatics::AIAwakeAndForceAwareness(UObject* WorldContextObject, const TArray<FGoHomeAndSleepEntry>& InAIToAwake) {
}

URsGameplayStatics::URsGameplayStatics() {
    // Null default object.
}

