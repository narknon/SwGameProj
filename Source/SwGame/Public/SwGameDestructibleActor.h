#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "RsDamageParams.h"
#include "ESwDestructibleActorDamageCountMethod.h"
#include "ESwDestructibleActorIntendedUsage.h"
#include "ESwDestructibleActorParallelStateType.h"
#include "ESwGameDestructionSaveType.h"
#include "OnNewFoliageInstanceBeforeDestroyingThisActorSignatureDelegate.h"
#include "SwGameDestructibleActorSaveGameState.h"
#include "SwGameDestructibleActorWorldStateSystemParameters.h"
#include "SwGameDestructibleOnBeforeLastPhaseDestructionSignatureDelegate.h"
#include "SwGameDestructibleOnBeforePhaseDestructionSignatureDelegate.h"
#include "SwSimpleDestructibleOnLastPhaseDestructedSignatureDelegate.h"
#include "SwSimpleDestructibleOnPhaseDestructedSignatureDelegate.h"
#include "SwSimpleDestructible_CommonAudioParameters.h"
#include "SwSimpleDestructible_CommonMaterialInstances.h"
#include "SwSimpleDestructible_CommonOptimizationParameters.h"
#include "SwSimpleDestructible_CommonReactionOnCharacterOverlap.h"
#include "SwSimpleDestructible_ParallelStates.h"
#include "SwSimpleDestructible_Phase.h"
#include "SwSimpleDestructible_Piece.h"
#include "SwSimpleDestructible_PiecePhysicsParameters.h"
#include "SwGameDestructibleActor.generated.h"

class AController;
class UDamageType;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ASwGameDestructibleActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwDestructibleActorIntendedUsage IntendedUsage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DestructionDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TakeDamageAcceptedOnlyFromHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TakeDamageMethodNeverAccepted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SetToForceIgnoredWhenDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSimpleDestructible_ParallelStates ParallelStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwGameDestructionSaveType SaveGameType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwGameDestructibleActorWorldStateSystemParameters WorldStateSystemParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwDestructibleActorDamageCountMethod DamageCountMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwSimpleDestructible_Phase> DestructionPhases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwSimpleDestructible_Piece> DestructiblePieces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSimpleDestructible_PiecePhysicsParameters DestructiblePiecesCommonPhysicsParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSimpleDestructible_CommonAudioParameters CommonAudioParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSimpleDestructible_CommonOptimizationParameters CommonOptimizationParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSimpleDestructible_CommonReactionOnCharacterOverlap CommonReactionOnCharacterOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSimpleDestructible_CommonMaterialInstances CommonMaterialInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugLogDestruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugLogSleepingStateForAllRigidBodies;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwGameDestructibleOnBeforePhaseDestructionSignature OnBeforePhaseDestructionEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwGameDestructibleOnBeforeLastPhaseDestructionSignature OnBeforeLastPhaseDestructionEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSimpleDestructibleOnPhaseDestructedSignature OnPhaseDestructedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSimpleDestructibleOnLastPhaseDestructedSignature OnLastPhaseDestructedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NeverDisableTick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewFoliageInstanceBeforeDestroyingThisActorSignature BlueprintOnNewFoliageInstanceBeforeDestroyingThisActorEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSwGameDestructibleActorSaveGameState m_SaveGameState;
    
public:
    ASwGameDestructibleActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPhaseDestructed(int32 PhaseIndex, const bool DuringInitializationFromSaveGameState, const bool DuringInitializationFromWorldStateSystem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLastPhaseDestructed(const bool DuringInitializationFromSaveGameState, const bool DuringInitializationFromWorldStateSystem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeforePhaseDestruction(int32 PhaseIndex, const bool DuringInitializationFromSaveGameState, const bool DuringInitializationFromWorldStateSystem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeforeLastPhaseDestruction(const bool DuringInitializationFromSaveGameState, const bool DuringInitializationFromWorldStateSystem);
    
    UFUNCTION(BlueprintCallable)
    static bool IsFullyDestroyed(const AActor* DestructibleActor);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFoliageInstanceIndex() const;
    
    UFUNCTION(BlueprintCallable)
    ESwDestructibleActorParallelStateType GetCurrentActiveParallelState();
    
    UFUNCTION(BlueprintCallable)
    static void FullyDestroyDestructibleActor(AActor* destructibleActorToFullyDestroy, FVector DestructionCenterPosition, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser, const FRsDamageParams& RsDamageParams);
    
    UFUNCTION(BlueprintCallable)
    static void FullyDestroyDestructible(AActor* destructibleActorToFullyDestroy, FVector DestructionCenterPosition, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintTakeDamageFromSwGameDestructibleActor(float DamageAmount, const FDamageEvent& DamageEvent, const FRsDamageParams& RsDamageParams, AController* EventInstigator, AActor* DamageCauser);
    
};

