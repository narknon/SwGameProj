#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "RsDialogueActorType.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Rs/ERsDesiredLevelLoadState.h"
#include "Rs/ERsStreamingState.h"
#include "Engine/EngineTypes.h"
#include "Engine/LatentActionManager.h"
#include "Rs/RsTelemetryValue_Boolean.h"
#include "Rs/RsTelemetryValue_Float.h"
#include "Rs/RsTelemetryValue_IndexedString.h"
#include "Rs/RsTelemetryValue_Int.h"
#include "Rs/RsTelemetryValue_String.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Chaos/ChaosEngineInterface.h"
#include "RsGeoLocator.h"
#include "ERsAttackerDirection.h"
#include "ERsBreakSyncType.h"
#include "ERsCharacterType.h"
#include "ERsDamageEffectType.h"
#include "GenericBlueprintEventDelegate.h"
#include "GoHomeAndSleepEntry.h"
#include "RsCameraEaseParams.h"
#include "RsDamageParams.h"
#include "RsHitEvent.h"
#include "RsPhysicalAnimationRuntimeProfileParameters.h"
#include "SyncTopologyRequestResult.h"
#include "Templates/SubclassOf.h"
#include "RsGameplayStatics.generated.h"

class AActor;
class AController;
class ALevelSequenceActor;
class APlayerController;
class ARsAICharacter;
class ARsCameraManager;
class ARsCharacter;
class ARsConversation;
class ARsHero;
class ARsMissionObjectiveSystemBase;
class ARsPlayerController;
class UActorComponent;
class UAnimInstance;
class UAnimMontage;
class UAnimSequence;
class UAnimSequenceBase;
class UAnimationAsset;
class UDamageType;
class UDataTable;
class UDecalComponent;
class UDialogue;
class UMaterialInterface;
class UMovieSceneSequence;
class UObject;
class UParticleSystem;
class UPrimitiveComponent;
class URsAIEncounterManager;
class URsDamageType;
class URsMasterSyncInstance;
class URsPhysicalAnimationProfile;
class URsSlaveSyncInstance;
class URsStreamingDefinition;
class URsSyncDefinition;
class URsSyncInstance;
class URsSyncManager;
class URsTargetableComponent;
class USceneComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class USkinnedMeshComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class URsGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URsGameplayStatics();
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void WaitForStreamingAreaToLoad(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, FName StreamingArea, bool bPauseGame, bool bWaitForNonVisibleLevels, bool bWaitForLODLevels, FName OptionalLevelContainer);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void UnloadStreamingArea(const UObject* WorldContextObject, FName StreamingArea, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void UnloadStandaloneStreamingLevel(const UObject* WorldContextObject, const URsStreamingDefinition* StreamingLevelDefinition, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void UnloadAllStreamingAreas(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnloadAllStandaloneStreamingLevels(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void TeleportLoad(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, FName PlayerStartName);
    
    UFUNCTION(BlueprintCallable)
    static void SyncActorsFromDefinitionHelper(const FTransform& Transform, URsSyncDefinition* SyncDefinition, AActor* Master, const FVector2D& MasterBlendSpaceInput, const TArray<AActor*>& Actors, const TArray<FVector2D>& SlaveBlendSpaceinputs, UAnimationAsset* OverrideAnimation, URsMasterSyncInstance*& MasterInstance, TArray<URsSlaveSyncInstance*>& SlaveInstanceArray);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static int32 SyncActorsFromDefinitionBasic(UObject* WorldContext, URsSyncDefinition* SyncDefinition, AActor* Master, AActor* Slave);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static int32 SyncActorsFromDefinitionAtLocation(UObject* WorldContext, URsSyncDefinition* SyncDefinition, const FTransform& Transform, const TArray<AActor*>& Actors, UAnimationAsset* OverrideAnimation, URsMasterSyncInstance*& MasterInstance, TArray<URsSlaveSyncInstance*>& SlaveInstanceArray, const TArray<FVector2D>& SlaveBlendSpaceinputs);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static int32 SyncActorsFromDefinition(UObject* WorldContext, URsSyncDefinition* SyncDefinition, AActor* Master, const TArray<AActor*>& Actors, UAnimationAsset* OverrideAnimation, URsMasterSyncInstance*& MasterInstance, TArray<URsSlaveSyncInstance*>& SlaveInstanceArray, const FVector2D& MasterBlendSpaceInput, const TArray<FVector2D>& SlaveBlendSpaceinputs);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static int32 SyncActors(UObject* WorldContext, URsMasterSyncInstance* MasterInstance, TArray<URsSlaveSyncInstance*> SlaveInstanceArray, TEnumAsByte<ERsBreakSyncType> BreakOnMontageEnd, TEnumAsByte<ERsBreakSyncType> BreakOnTakeDamage);
    
    UFUNCTION(BlueprintCallable)
    static void StopMontagesAndEndNotifyStates(UAnimInstance* AnimInstance, const float BlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    static void StopMontageAndEndNotifyStates(UAnimInstance* AnimInstance, UAnimMontage* Montage, float BlendOutTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopHintingAtTeleportingPositionForStreaming(const UObject* WorldContextObject, FVector Position, bool bClearOverrideForPortalCalculations);
    
    UFUNCTION(BlueprintCallable)
    static void StopDamageOverTime(AActor* DamagedActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartHintingAtTeleportingPositionForStreaming(const UObject* WorldContextObject, FVector Position, bool bOverrideForPortalCalculations);
    
    UFUNCTION(BlueprintCallable)
    static void StartDamageOverTime(AActor* DamagedActor, float DamagePerTick, float DamageDuration, float DamageTickRate, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDecalComponent* SpawnDecalAtLocationWithNormal(const UObject* WorldContextObject, UMaterialInterface* DecalMaterial, FVector DecalSize, FVector Location, FVector DecalNormal, float RotationAroundNormal, float LifeSpan);
    
    UFUNCTION(BlueprintCallable)
    static AActor* SpawnActorAtSocket(AActor* SpawnerActor, FName SocketName, TSubclassOf<AActor> SpawnActorClass, FVector LocalSpawnImpulse, FVector LocalSpawnAngularImpulse, float LifeSpan, UParticleSystem* ParticleSystemClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SortActorsByDistance(UObject* WorldContext, AActor* DistanceToActor, TArray<AActor*> ActorsToSort, TArray<AActor*>& SortedActors);
    
    UFUNCTION(BlueprintCallable)
    static void ShowDismemberMeshComponent(USkinnedMeshComponent* SkinnedMeshComponent, USkinnedMeshComponent* SourceMeshComponent, bool NewConvertToRagdoll, UAnimationAsset* AnimationToPlay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldDeferCineStart();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetWorldRootLevel(const UObject* WorldContextObject, const URsStreamingDefinition* StreamingLevelDefinition);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetStreamingPortalProcessingState(const UObject* WorldContextObject, bool bDisallowLoading, bool bDisallowUnloading, bool bDisallowStateChange, bool bReturnToNormalOnNewRoot);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetStreamingArea(const UObject* WorldContextObject, FName StreamingArea);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetRootLevel(const UObject* WorldContextObject, const URsStreamingDefinition* StreamingLevelDefinition, FName StreamingArea);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayRateForRelevantMontage(UAnimInstance* AnimInstance, UAnimSequenceBase* Animation, float NewPlayRate);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaxHealth(ARsCharacter* Character, float MaxHealth, bool bUpdateCurrentHealth);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void SetLoadedStreamingArea(const UObject* WorldContextObject, FName StreamingArea, FName InitialLoadToken, const FString& OptionalLoadOrder, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetLevelTransform(const UObject* WorldContextObject, const URsStreamingDefinition* StreamingLevelDefinition, FTransform LevelTransform);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetLevelSequenceActorTransformForDynamicStartPoint(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetHealth(ARsCharacter* Character, float Health, bool SetIfDead);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnableMotionModel(ARsCharacter* Character, bool enable);
    
    UFUNCTION(BlueprintCallable)
    static void SetCanDie(ARsCharacter* Character, bool bCanDie);
    
    UFUNCTION(BlueprintCallable)
    static void SetCanBeTargeted(AActor* Actor, bool bCanBetargeted);
    
    UFUNCTION(BlueprintCallable)
    static void SetCanBePlayerZTargeted(AActor* Actor, bool bCanBePlayerZTargeted);
    
    UFUNCTION(BlueprintCallable)
    static void SetActiveOnlinePlayerController(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static void SeperateFromMasterPoseComponent(USkinnedMeshComponent* SkinnedMeshComponent, bool NewConvertToRagdoll, UAnimationAsset* AnimationToPlay);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag SelectSmartTag(AActor* Actor, FGameplayTag ParentTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RsSetImpactEffectTable(UObject* WorldContextObject, UDataTable* ImpactEffectsSurface, UDataTable* ImpactEffectsCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool RsIsLightsaberAttackType(const UObject* WorldContextObject, FName AttackType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RsImpactEffectOnGround(UObject* WorldContextObject, FName AttackType, const FVector& Location);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RsImpactEffectFromSweepImpactNormal(UObject* WorldContextObject, const FHitResult& HitSweep, FName AttackType, ERsDamageEffectType DamageEffectType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RsImpactEffectFromSweep(UObject* WorldContextObject, const FHitResult& HitSweep, FName AttackType, ERsDamageEffectType DamageEffectType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RsImpactEffectFromDamageParams(UObject* WorldContextObject, AActor* DamagedActor, USceneComponent* DamagedComponent, const FRsDamageParams& DamageParams, ERsDamageEffectType DamageEffectType, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RsImpactEffect(UObject* WorldContextObject, AActor* DamagedActor, USceneComponent* DamagedComponent, FName AttachSocket, FName AttackType, ERsDamageEffectType DamageEffectType, TEnumAsByte<EPhysicalSurface> SurfaceType, const FVector& Location, const FVector& FXDir, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ARsHero* RsGetPlayerHero(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ARsPlayerController* RsGetPlayerController(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ARsCharacter* RsGetPlayerCharacter(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ARsCameraManager* RsGetPlayerCameraManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ARsCharacter* RsGetComponentCharacter(const UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static bool RsApplyRadialDamageWithFalloff(float BaseDamage, float MinimumDamage, const FVector& origin, float DamageInnerRadius, float DamageOuterRadius, TSubclassOf<UDamageType> DamageTypeClass, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, const FRsHitEvent& HitEvent);
    
    UFUNCTION(BlueprintCallable)
    static bool RsApplyRadialDamage(float BaseDamage, const FVector& origin, float DamageRadius, TSubclassOf<UDamageType> DamageTypeClass, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, const FRsHitEvent& HitEvent);
    
    UFUNCTION(BlueprintCallable)
    static float RsApplyDamageSeparateActor(const FHitResult& HitSweep, const URsDamageType* DamageType, ARsCharacter* DamageCauser, AActor* DamageCauseActor, UPrimitiveComponent* DamageCausingComponent);
    
    UFUNCTION(BlueprintCallable)
    static float RsApplyDamageFromSweep(const FHitResult& HitSweep, float BaseDamage, ARsCharacter* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass, FName AttackType);
    
    UFUNCTION(BlueprintCallable)
    static float RsApplyDamageFromHitEventSeparateActor(const FHitResult& HitSweep, const FRsHitEvent& HitEvent, ARsCharacter* DamageCauser, AActor* DamageCauseActor);
    
    UFUNCTION(BlueprintCallable)
    static float RsApplyDamageFromHitEvent(const FHitResult& HitSweep, const FRsHitEvent& HitEvent, ARsCharacter* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    static float RsApplyDamageFromDamageType(const FHitResult& HitSweep, const URsDamageType* DamageType, ARsCharacter* DamageCauser, UPrimitiveComponent* DamageCausingComponent);
    
    UFUNCTION(BlueprintCallable)
    static float RsApplyDamage(AActor* DamagedActor, UPrimitiveComponent* DamagedComponent, float BaseDamage, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass, const FRsDamageParams& DamageParams);
    
    UFUNCTION(BlueprintCallable)
    static void RotateToVector(AActor* Actor, const FVector& Direction, float Offset);
    
    UFUNCTION(BlueprintCallable)
    static void RotateToTargetWithMax(AActor* ActorStart, AActor* ActorTarget, float Offset, float MaxAmount);
    
    UFUNCTION(BlueprintCallable)
    static void RotateToTargetImmediate(AActor* ActorStart, AActor* ActorTarget, float RotateAmount, bool immediate);
    
    UFUNCTION(BlueprintCallable)
    static void RotateToTarget(AActor* ActorStart, AActor* ActorTarget, float RotateAmount);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReturnStreamingPortalProcessingToNormal(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void RestartWorldWithPlayerStartName(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, URsStreamingDefinition* StreamingLevelDefinition, FName PlayerStartName, bool bAllowLoadoutOverride);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void RestartWorld(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, AActor* AtPlayerStart, bool bAllowLoadoutOverride);
    
    UFUNCTION(BlueprintCallable)
    static void ResetHealthToMax(ARsCharacter* Character, bool SetIfDead);
    
    UFUNCTION(BlueprintCallable)
    static void ResetAllRopePhysics();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestAllStreamingToFinishToUnpause(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveForcedStateFromStreamingAreas(const UObject* WorldContextObject, const TArray<FName>& StreamingAreas);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveCorpse(ARsAICharacter* Corpse, bool bFade);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void RemoveAllCorpses(UObject* WorldContext, bool bFade);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReloadStreamingLevel(const UObject* WorldContextObject, URsStreamingDefinition* StreamingLevelDefinition);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ReclaimParticlePools(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static void PrestreamTextures(const USkeletalMesh* SkeletalMesh, float Seconds);
    
    UFUNCTION(BlueprintCallable)
    static void PreStreamMeshTextures(const UStaticMesh* StaticMesh, float Seconds);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void PreloadStreamingArea(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, FName StreamingArea, TEnumAsByte<ERsDesiredLevelLoadState> DesiredLoadState);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void PreloadRootLevelWithMultipleAreas(const UObject* WorldContextObject, const URsStreamingDefinition* StreamingLevelDefinition, const TArray<FName>& StreamingAreasToLoad, FLatentActionInfo LatentInfo, TEnumAsByte<ERsDesiredLevelLoadState> DesiredLoadState, bool bSkipVistaLevels);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void PreloadRootLevel(const UObject* WorldContextObject, const URsStreamingDefinition* StreamingLevelDefinition, FName StreamingArea, FLatentActionInfo LatentInfo, TEnumAsByte<ERsDesiredLevelLoadState> DesiredLoadState, bool bSkipVistaLevels);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OverrideStreamingAreaVistaVisibility(const UObject* WorldContextObject, bool bHideVistas);
    
    UFUNCTION(BlueprintCallable)
    static void LoseHealth(ARsCharacter* Character, float Amount);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogTelemetryStat_Int(const UObject* WorldContextObject, FName StatName, int32 StatValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogTelemetryStat_Float(const UObject* WorldContextObject, FName StatName, float StatValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogTelemetryEventAtLocation(const UObject* WorldContextObject, FName EventName, FVector Location, TArray<FRsTelemetryValue_Float> AdditionalFloatParameters, TArray<FRsTelemetryValue_Int> AdditionalIntegerParameters, TArray<FRsTelemetryValue_Boolean> AdditionalBooleanParameters, TArray<FRsTelemetryValue_IndexedString> AdditionalIndexedStringParameters, TArray<FRsTelemetryValue_String> AdditionalStringParameters);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogTelemetryEvent(const UObject* WorldContextObject, FName EventName, TArray<FRsTelemetryValue_Float> AdditionalFloatParameters, TArray<FRsTelemetryValue_Int> AdditionalIntegerParameters, TArray<FRsTelemetryValue_Boolean> AdditionalBooleanParameters, TArray<FRsTelemetryValue_IndexedString> AdditionalIndexedStringParameters, TArray<FRsTelemetryValue_String> AdditionalStringParameters);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void LoadWorld(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, FName WorldName, FName PlayerStartName, bool bAllowLoadoutOverride);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void LoadStreamingArea(const UObject* WorldContextObject, FName StreamingArea, FName InitialLoadToken, bool bShouldBlockOnLoad, const FString& OptionalLoadOrder, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void LoadStandaloneStreamingLevel(const UObject* WorldContextObject, const URsStreamingDefinition* StreamingLevelDefinition, TEnumAsByte<ERsDesiredLevelLoadState> DesiredLoadState, FName InitialLoadToken, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void LoadPlayerStartListForWorld(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, FName WorldName);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void LoadPlayerStartLevels(const UObject* WorldContextObject, const URsStreamingDefinition* StreamingLevelDefinition, FName PlayerStartName, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void KillCharacter(ARsCharacter* Character, AController* EventInstigator, AActor* DamageCauser, bool bUseDamageSystem, bool bSkipDeathAnimation, bool bCleanupImmediately);
    
    UFUNCTION(BlueprintCallable)
    static bool K2_RsApplyRadialDamageWithFalloff(float BaseDamage, float MinimumDamage, const FVector& origin, float DamageInnerRadius, float DamageOuterRadius, const URsDamageType* DamageType, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, bool bFaceDamageCauser);
    
    UFUNCTION(BlueprintCallable)
    static bool K2_RsApplyRadialDamage(float BaseDamage, const FVector& origin, float DamageRadius, const URsDamageType* DamageType, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, bool bFaceDamageCauser);
    
    UFUNCTION(BlueprintCallable)
    static float K2_RsApplyDamageFromSweep(const FHitResult& HitSweep, float BaseDamage, ARsCharacter* DamageCauser, const URsDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable)
    static float K2_RsApplyDamage(AActor* DamagedActor, UPrimitiveComponent* DamagedComponent, float BaseDamage, AController* EventInstigator, AActor* DamageCauser, const URsDamageType* DamageType, const FRsDamageParams& DamageParams);
    
    UFUNCTION(BlueprintCallable)
    static void K2_InflictDamage(ARsCharacter* Character, float Damage, const URsDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsTelemetryEnabled(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsStreamingLevelLoaded(const UObject* WorldContextObject, URsStreamingDefinition* StreamingLevelDefinition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsObjectOfClass(UObject* InObject, const TSoftClassPtr<UObject>& InClassToCheck);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsLevelStreamingInProgress(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsIKRigActive(ARsCharacter* Character);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsCurrentRootLevel(const UObject* WorldContextObject, const URsStreamingDefinition* StreamingLevelDefinition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCinematicEndInCombatState(UMovieSceneSequence* MovieSceneSequence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCharacterOfType(const ARsCharacter* Character, TEnumAsByte<ERsCharacterType> CharacterType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAlive(ARsCharacter* Character);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool IsActorSyncingWithPlayer(UObject* WorldContext, AActor* SyncActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool IsActorSyncing(UObject* WorldContext, AActor* SyncActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorOfType(const AActor* Actor, TEnumAsByte<ERsCharacterType> CharacterType);
    
    UFUNCTION(BlueprintCallable)
    static void InflictDamage(ARsCharacter* Character, float Damage, TSubclassOf<UDamageType> DamageType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool InEditorAtEditTime(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void HealCharacter(ARsCharacter* Character, float Amount);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FName> GetWorldNameList(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URsTargetableComponent* GetTargetableComponent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static URsSyncManager* GetSyncManager(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static FName GetSurfaceTypeName(TEnumAsByte<EPhysicalSurface> SurfaceType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetStreamingDefinitionForWorld(const UObject* WorldContextObject, FName WorldName, URsStreamingDefinition*& OutDefinition);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetStreamingAreaNames(const UObject* WorldContextObject, TArray<FName>& OutAreaNames);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetPlayerStartNames(const UObject* WorldContextObject, TArray<FName>& OutPlayerStartNames);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FName> GetPlayerStartListForWorld(const UObject* WorldContextObject, FName WorldName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static ARsMissionObjectiveSystemBase* GetMissionObjectiveSystem(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMaxHealth(ARsCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    static FString GetLevelNameForActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetHealthFraction(ARsCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetHealth(ARsCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static URsAIEncounterManager* GetEncounterManager(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FRsDialogueActorType> GetDialogueSpeakerList(UObject* WorldContextObject, TSoftObjectPtr<UDialogue> Dialogue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FName GetCurrentStreamingArea(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ERsAttackerDirection GetAttackerRelativeDirectionForHitVelocity(const AActor* Target, const FVector& Velicity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ERsAttackerDirection GetAttackerRelativeDirection(const AActor* Target, const AActor* Attacker);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAnimationBoneTransform(USkeletalMeshComponent* InMesh, UAnimSequence* InAnim, FName InBoneName, float InAnimationTime, bool bSubtractRootMotion, FTransform& OutInitialAnimTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetActorTransformInLevelSequenceAtFirstFrame(FTransform& OutTransform, FVector& OutVelocity, ALevelSequenceActor* LevelSequenceActor, FName ActorTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetActorTransformInLevelSequence(FTransform& OutTransform, FVector& OutVelocity, ALevelSequenceActor* LevelSequenceActor, FName ActorTag, int32 StartFrame);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FString GetActiveOnlinePlayerNickname(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static APlayerController* GetActiveOnlinePlayerController();
    
    UFUNCTION(BlueprintCallable)
    static bool GetAchievementNameByIndex(uint8 Index, FName& AchievementName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ForceStreamingAreasToBeVisible(const UObject* WorldContextObject, const TArray<FName>& StreamingAreas);
    
    UFUNCTION(BlueprintCallable)
    static void ForceSkeletalMeshLOD(int32 ForcedLOD, USkeletalMeshComponent* SkeletalMeshComponent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ForceImmediateLevelsVisibilityUpdate(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ERsAttackerDirection FlipAttackerDirection(ERsAttackerDirection AttackerDirection);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static URsSyncInstance* FindSyncInstance(UObject* WorldContext, ARsCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    static void EnablePhysicalAnimationProfile(AActor* TargetActor, const FRsPhysicalAnimationRuntimeProfileParameters& OperationParameters, const URsPhysicalAnimationProfile* InProfile);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool DoesStreamingAreaMeetStreamingState(const UObject* WorldContextObject, FName StreamingAreaName, TEnumAsByte<ERsStreamingState> DesiredStreamingState);
    
    UFUNCTION(BlueprintCallable)
    static void DisablePhysicalAnimationImmediately(AActor* TargetActor, const FRsPhysicalAnimationRuntimeProfileParameters& OperationParameters);
    
    UFUNCTION(BlueprintCallable)
    static void DisablePhysicalAnimation(AActor* TargetActor, const FRsPhysicalAnimationRuntimeProfileParameters& OperationParameters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DetermineTargetToRight(AActor* ActorSelf, AActor* ActorTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DetermineTargetBehind(AActor* ActorSelf, AActor* ActorTarget);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyCharacter(ARsCharacter* Character);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void DeferEventUntilNextFrame(UObject* WorldContext, const FGenericBlueprintEvent& Event);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static URsSlaveSyncInstance* CreateSlaveSyncInstance(UObject* WorldContext, AActor* Actor, UAnimationAsset* Animation, FName BoneName, bool bEndSyncOnMontageBlendingOut);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static URsMasterSyncInstance* CreateMasterSyncInstance(UObject* WorldContext, AActor* Actor, UAnimationAsset* Animation, FRsGeoLocator ConstraintLocator, bool bEndSyncOnMontageBlendingOut);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ARsConversation* CreateConversation(UObject* WorldContextObject, TSoftObjectPtr<UDialogue> Dialogue, const FGameplayTagContainer& InTemporaryTrueTags, TArray<AActor*> Actors, FGameplayTag EventContext, bool IsBackground);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertToRagdoll(AActor* Actor, const bool DisableColliders, const bool bDeferPhysicsStartUntilEndOfFrame);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearLevelTransform(const UObject* WorldContextObject, const URsStreamingDefinition* StreamingLevelDefinition);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearForcedVisibleStreamingAreas(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ClearForcedSkeletalMeshLOD(USkeletalMeshComponent* SkeletalMeshComponent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearAllHintingForStreamingTeleportingPosition(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FSyncTopologyRequestResult CheckSyncTopologyComplianceAtLocation(const FTransform& Transform, URsSyncDefinition* SyncDefinition, AActor* Master, TArray<AActor*> Slaves, UAnimationAsset* OverrideAnimation);
    
    UFUNCTION(BlueprintCallable)
    static FSyncTopologyRequestResult CheckSyncTopologyCompliance(URsSyncDefinition* SyncDefinition, AActor* Master, TArray<AActor*> Slaves, UAnimationAsset* OverrideAnimation);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CancelPreloadStreamingArea(const UObject* WorldContextObject, FName StreamingArea);
    
    UFUNCTION(BlueprintCallable)
    static float CameraEase(const FRsCameraEaseParams& EaseParams, float Begin, float End, float ALPHA);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void BreakSync(UObject* WorldContext, int32 SyncID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool BreakFirstSync(UObject* WorldContext, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void BreakActorInSync(UObject* WorldContext, AActor* Actor, int32 SyncID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BlueprintError(const UObject* WorldContextObject, const FString& Error);
    
    UFUNCTION(BlueprintCallable)
    static bool AnyCorpsesInRadius(AActor* InActor, float InRadius);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AIReturnHomeAndGoToSleepAll(UObject* WorldContextObject, const TArray<ARsAICharacter*>& InCharactersToExclude, const TArray<TSubclassOf<ARsAICharacter>>& InCharactersClassesToExclude, TArray<FGoHomeAndSleepEntry>& OutProcessedActors, float MaxDistance, bool bInSendHomeNonHostile, bool bInSentHomeUnawareCharacters, bool bStoreHeroAwareness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AIAwakeAndForceAwarenessInRadius(UObject* WorldContextObject, const TArray<FGoHomeAndSleepEntry>& InAIToAwake, const FVector& origin, float Radius);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AIAwakeAndForceAwareness(UObject* WorldContextObject, const TArray<FGoHomeAndSleepEntry>& InAIToAwake);
    
};

