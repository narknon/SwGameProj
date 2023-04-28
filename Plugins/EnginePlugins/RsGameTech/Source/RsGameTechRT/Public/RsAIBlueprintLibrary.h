#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERsAIAwarenessLevel.h"
#include "ERsAIAwarenessState.h"
#include "ERsAIBlendspaceInputSource.h"
#include "ERsAIClass.h"
#include "ERsAIGameState.h"
#include "ERsAIPatrolPathUsage.h"
#include "ERsAIScriptingMode.h"
#include "ERsAISoundType.h"
#include "ERsCharacterType.h"
#include "RsAISingleSpawnedDelegateDelegate.h"
#include "RsBlueprintableAIDeferredCommandUID.h"
#include "RsAIBlueprintLibrary.generated.h"

class AActor;
class ALevelSequenceActor;
class ARsAICharacter;
class ARsAICharacterSpawner;
class ARsAIController;
class ARsAIPOI;
class ARsAIPatrolPath;
class ARsCharacter;
class ArsActor;
class UAnimMontage;
class UAnimSequence;
class UMeshComponent;
class UObject;
class URsAIAwarenessStateDefinition_Aggro;
class URsAICharacterDefinition;
class URsAIGameStateManager;
class URsAISystem;

UCLASS(Blueprintable)
class URsAIBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URsAIBlueprintLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static FRsBlueprintableAIDeferredCommandUID SpawnAIFromDefinition(UObject* WorldContext, URsAICharacterDefinition* AICharacterDefinition, const FRsAISingleSpawnedDelegate& OnAISpawnedDelegate, const FVector& Location, const FRotator& Rotation, AActor* SpawnParent, bool bNoCollisionFail, bool bProjectToNavmesh, bool bDebugSpawn);
    
    UFUNCTION(BlueprintCallable)
    static void SetupDismembermentMeshes(const TArray<UMeshComponent*>& MeshComponents);
    
    UFUNCTION(BlueprintCallable)
    static void SetPatrolPath(ARsAIController* AIController, ARsAIPatrolPath* PatrolPath, FName MotionParm, TEnumAsByte<ERsAIPatrolPathUsage::Type> PathUsage, TEnumAsByte<ERsAIScriptingMode::Type> ScriptingMode, TEnumAsByte<ERsAIScriptingMode::Type> ScriptingModeWhenDone, bool bSetEndToHomeLocation, bool bEnableCrowdAvoidance);
    
    UFUNCTION(BlueprintCallable)
    static void SetAIScriptingMode(ARsAIController* AIController, TEnumAsByte<ERsAIScriptingMode::Type> ScriptingMode);
    
    UFUNCTION(BlueprintCallable)
    static bool ScriptedMoveToLocation(ARsAICharacter* AICharacter, const FVector& MoveTargetLocation, FName MotionParmName, TEnumAsByte<ERsAIScriptingMode::Type> ScriptingMode, TEnumAsByte<ERsAIScriptingMode::Type> ScriptingModeWhenDone, bool bSetNewHomeLocation);
    
    UFUNCTION(BlueprintCallable)
    static bool ScriptedMoveToActor(ARsAICharacter* AICharacter, const AActor* MoveTargetActor, FName MotionParmName, TEnumAsByte<ERsAIScriptingMode::Type> ScriptingMode, TEnumAsByte<ERsAIScriptingMode::Type> ScriptingModeWhenDone, bool bSetNewHomeLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool PlayAlertedVO(ARsAICharacter* AICharacter);
    
    UFUNCTION(BlueprintCallable)
    static bool OverrideAggroStateDefinition(AActor* ControlledActor, URsAIAwarenessStateDefinition_Aggro* InOverride);
    
    UFUNCTION(BlueprintCallable)
    static void MakeAISound(AActor* SourceActor, AActor* InstigatorActor, TEnumAsByte<ERsAISoundType::Type> SoundType, bool bIsHostile);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsLastEnemy(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsInAIGameState(UObject* WorldContext, TEnumAsByte<ERsAIGameState::Type> GameState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHostileTo(AActor* FirstActor, AActor* SecondActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFriendlyTo(AActor* FirstActor, AActor* SecondActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAlone(ARsAICharacter* AICharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTeamStrength(ARsAICharacter* AICharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<ARsAICharacter*> GetSubteamMembers(ARsAICharacter* AICharacter, bool bInclusive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ARsAIController* GetRsAIController(AActor* ControlledActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static TArray<ARsAIPOI*> GetRegisteredPOIsForCharacter(UObject* WorldContext, const ARsAICharacter* AICharacter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static TArray<ARsAIPOI*> GetRegisteredPOIs(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static TArray<ARsAICharacterSpawner*> GetPersistentCharacterSpawnersForLevelSequence(const ALevelSequenceActor* LevelSequenceActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetCharactersAwareOf(ARsAICharacter* AICharacter, TArray<AActor*>& OutEnemies, TEnumAsByte<ERsAIAwarenessLevel::Type> MinimumAwarenessLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static URsAISystem* GetAISystem(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<ERsAIScriptingMode::Type> GetAIScriptingMode(ARsAIController* AIController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAIMoveTargetLocation(ARsAIController* AIController, FVector& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAIMoveTargetActor(ARsAIController* AIController, AActor*& Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static URsAIGameStateManager* GetAIGameStateManager(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TEnumAsByte<ERsAIGameState::Type> GetAIGameState(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAIFocusTargetLocation(ARsAIController* AIController, FVector& FocusLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<ERsAIClass::Type> GetAIClass(ARsAIController* AIController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<ERsAIAwarenessState::Type> GetAIAwarenessState(ARsAIController* AIController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAIAttackTargetLocation(ARsAIController* AIController, FVector& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAIAttackTargetActor(ARsAIController* AIController, AActor*& Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAIAttackTarget(AActor* ControlledActor, AActor*& TargetActor, FVector& TargetLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<ARsCharacter*> FindAwarenessGroup(ARsAIController* AIController, TEnumAsByte<ERsCharacterType> CharacterType, float Radius);
    
    UFUNCTION(BlueprintCallable)
    static FText DebugGenerateSpawnShortcutText();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void DebugEnableAI(UObject* WorldContext, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void ClearPatrolPath(ARsAIController* AIController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool CheckCharacterOnScreenByCapsule(UObject* WorldContext, const ArsActor* Character, bool bDebugDraw, float DebugDrawDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanPlayAnimSequenceOnNavMesh(ARsAIController* AIController, const UAnimSequence* Animation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanPlayAnimMontageOnNavMesh(ARsAIController* AIController, const UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    static float CalculateRootMotionDisplacement(const UAnimSequence* Sequence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D CalculateAIBlendSpaceInput(ARsAIController* AIController, TEnumAsByte<ERsAIBlendspaceInputSource::Type> BlendSpaceType);
    
    UFUNCTION(BlueprintCallable)
    static void BecomeAwareOf(ARsAIController* AIController, AActor* ActorToBeAwareOf);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AnyEnemiesAwareOf(ARsAICharacter* AICharacter);
    
};

