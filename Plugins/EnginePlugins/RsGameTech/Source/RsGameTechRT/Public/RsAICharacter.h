#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Rs/RsAISpawnerNarrativeSettings.h"
#include "GameplayTagContainer.h"
#include "ERsTopologyMode.h"
#include "RsGeoLocator.h"
#include "ERsAIAwarenessKind.h"
#include "ERsAIAwarenessReactionRole.h"
#include "RsAIBrokenOutOfSequenceDelegate.h"
#include "RsAICorpseRemovedDelegate.h"
#include "RsAIFinishedSpawningEventDelegate.h"
#include "RsAISpawnerIKRigSettings.h"
#include "RsBlueprintableAIDeferredCommandUID.h"
#include "RsCharacter.h"
#include "RsReceivedInitializeAIEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "RsAICharacter.generated.h"

class AActor;
class ARsAICharacter;
class ARsAICharacterSpawner;
class ARsAIController;
class ARsAISpawner;
class ARsNavVolume;
class UAnimMontage;
class UAnimSequence;
class UAnimationAsset;
class UMovieSceneSequence;
class URsAIBehaviorState;
class URsAIBehaviorStateMachine;
class URsAIConstrainedMovement;
class URsAIResource;
class USceneComponent;

UCLASS(Blueprintable)
class ARsAICharacter : public ARsCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsAIConstrainedMovement* ConstrainedMovement;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIFinishedSpawningEvent OnAIFinishedSpawningEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARsAIController* SleepController;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* AlwaysUpdateTransformComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDontSetDeathCollisionTweak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAISpawnerNarrativeSettings NarrativeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAISpawnerIKRigSettings IKRigSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCrossAreaTravel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bWasSyncKilled: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsReceivedInitializeAIEvent EventReceivedInitializeAI;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAICorpseRemoved OnCorpseRemoved;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsDismembered: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CurrentStreamingArea;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfAiSpawnedOnDeath;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableRagdoll: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bKillOnEnterWater: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMovieSceneSequence* AIBoundToMasterSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TWeakObjectPtr<ARsAICharacterSpawner>> SpawnersInBreakoutGroup;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIBrokenOutOfSequence OnAIBrokenOutOfSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHideWhenAttachParentObstructsCamera: 1;
    
public:
    ARsAICharacter();
    UFUNCTION(BlueprintCallable)
    void SetWeaponUnsheathed(bool bIsUnsheathed);
    
    UFUNCTION(BlueprintCallable)
    void SetUpdateChildTransformAsleep(bool bCanUpdateChildTransformsAsleep);
    
    UFUNCTION(BlueprintCallable)
    void SetClampToNavMeshAdvanced_BluePrint(bool Clamp);
    
    UFUNCTION(BlueprintCallable)
    void SetClampToNavMesh_BluePrint(bool Clamp);
    
    UFUNCTION(BlueprintCallable)
    void SetCanBeKilledByWater(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAIToBusy(bool bIsBusy);
    
    UFUNCTION(BlueprintCallable)
    bool SetAIBehaviorStateByName(FName NewStateName, bool bRestartState, bool bStackState, bool AssertOnNotFound);
    
    UFUNCTION(BlueprintCallable)
    void SetAIBehaviorState(URsAIBehaviorState* NewStateTemplate, bool bStackState);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSpawnerFromBreakoutGroup(TSoftObjectPtr<ARsAICharacterSpawner> SpawnerToRemove, bool bReciprocal);
    
    UFUNCTION(BlueprintCallable)
    void RemoveForbidBindingToNonCinematicSequenceCircumstances(int32 Circumstances);
    
    UFUNCTION(BlueprintCallable)
    void RemoveForbidBindingToCinematicSequenceCircumstances(int32 Circumstances);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCharacterFromBreakoutGroup(ARsAICharacter* CharacterToRemove, bool bReciprocal);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayAIConstrainedAnimationWithDynamicTarget(UAnimationAsset* Asset, FRsGeoLocator GeoLocator, FVector TargetDirection, bool bBlendspaceAsSelector, float BlendInTime, float BlendOutTime, FName AnimationSlot, bool PlayRandomAnimation, float StartPosition, float Playrate, float BlendOutTriggerTime, FVector2D BlendSpaceInput);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayAIConstrainedAnimation(UAnimationAsset* Asset, FVector TargetLocation, TArray<FVector> AnchorLocations, FVector TargetDirection, bool bBlendspaceAsSelector, float BlendInTime, float BlendOutTime, FName AnimationSlot, bool PlayRandomAnimation, float StartPosition, float Playrate, float BlendOutTriggerTime, FVector2D BlendSpaceInput);
    
private:
    UFUNCTION(BlueprintCallable)
    void PlaceOnNavMeshOnHitGroundEvent_Internal(ERsTopologyMode previousMode, ERsTopologyMode newMode, float Proximity);
    
public:
    UFUNCTION(BlueprintCallable)
    bool PlaceOnNavMesh_Blueprint(const FVector& extentMargin);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTopologyChangedPrivate(ERsTopologyMode previousMode, ERsTopologyMode newMode, float Proximity);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestAmbientToAlertDialogue(AActor* Source, TEnumAsByte<ERsAIAwarenessKind::Type> AwarenessKind, TEnumAsByte<ERsAIAwarenessReactionRole::Type> ReactionRole);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestAlertToAmbientDialogue();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceivedInitializeAI_PostInitController(const ARsAICharacter* AICharacter, ARsAIController* AIController);
    
    UFUNCTION(BlueprintCallable)
    void OnPostDeath();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerInteractStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerInteractEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNotifyAISpawned(ARsAISpawner* Spawner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeforeKillingAIWhenEnteredWater();
    
    UFUNCTION(BlueprintCallable)
    void K2_AISleep();
    
    UFUNCTION(BlueprintCallable)
    void K2_AISemiSleep();
    
    UFUNCTION(BlueprintCallable)
    void K2_AIAwake();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeaponUnsheathed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAIResource(TSoftClassPtr<URsAIResource> ResourceClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetSpeakerTagOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetSpawnTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARsAISpawner* GetSpawner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanBeKilledByWater() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsBlueprintableAIDeferredCommandUID GetBlueprintableSpawnCommandUID();
    
    UFUNCTION(BlueprintCallable)
    void ClearForbidBindingToNonCinematicSequenceCircumstances();
    
    UFUNCTION(BlueprintCallable)
    void ClearForbidBindingToCinematicSequenceCircumstances();
    
    UFUNCTION(BlueprintCallable)
    void ClearBreakoutGroup(bool bReciprocal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlayMontageOnNavMesh(const UAnimMontage* Montage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlayAnimSequenceOnNavMesh(const UAnimSequence* Animation) const;
    
    UFUNCTION(BlueprintCallable)
    void BreakOutOfSequence(bool bBreakOutOtherCharactersInGroup);
    
private:
    UFUNCTION(BlueprintCallable)
    void AICharacterIsInWaterStateChanged(ARsCharacter* RsCharacter, ARsNavVolume* Volume, bool bIsAICharacterInWater, bool bWasInWater);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddSpawnerToBreakoutGroup(TSoftObjectPtr<ARsAICharacterSpawner> SpawnerToAdd, bool bReciprocal);
    
    UFUNCTION(BlueprintCallable)
    void AddForbidBindingToNonCinematicSequenceCircumstances(int32 Circumstances);
    
    UFUNCTION(BlueprintCallable)
    void AddForbidBindingToCinematicSequenceCircumstances(int32 Circumstances);
    
    UFUNCTION(BlueprintCallable)
    void AddCharacterToBreakoutGroup(ARsAICharacter* CharacterToAdd, bool bReciprocal);
    
    UFUNCTION(BlueprintCallable)
    void ActivateBehaviorStateMachine(TSubclassOf<URsAIBehaviorStateMachine> NewAwarenessStateMachine);
    
};

