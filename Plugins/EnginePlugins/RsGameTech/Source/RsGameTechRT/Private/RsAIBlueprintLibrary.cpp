#include "RsAIBlueprintLibrary.h"

FRsBlueprintableAIDeferredCommandUID URsAIBlueprintLibrary::SpawnAIFromDefinition(UObject* WorldContext, URsAICharacterDefinition* AICharacterDefinition, const FRsAISingleSpawnedDelegate& OnAISpawnedDelegate, const FVector& Location, const FRotator& Rotation, AActor* SpawnParent, bool bNoCollisionFail, bool bProjectToNavmesh, bool bDebugSpawn) {
    return FRsBlueprintableAIDeferredCommandUID{};
}

void URsAIBlueprintLibrary::SetupDismembermentMeshes(const TArray<UMeshComponent*>& MeshComponents) {
}

void URsAIBlueprintLibrary::SetPatrolPath(ARsAIController* AIController, ARsAIPatrolPath* PatrolPath, FName MotionParm, TEnumAsByte<ERsAIPatrolPathUsage::Type> PathUsage, TEnumAsByte<ERsAIScriptingMode::Type> ScriptingMode, TEnumAsByte<ERsAIScriptingMode::Type> ScriptingModeWhenDone, bool bSetEndToHomeLocation, bool bEnableCrowdAvoidance) {
}

void URsAIBlueprintLibrary::SetAIScriptingMode(ARsAIController* AIController, TEnumAsByte<ERsAIScriptingMode::Type> ScriptingMode) {
}

bool URsAIBlueprintLibrary::ScriptedMoveToLocation(ARsAICharacter* AICharacter, const FVector& MoveTargetLocation, FName MotionParmName, TEnumAsByte<ERsAIScriptingMode::Type> ScriptingMode, TEnumAsByte<ERsAIScriptingMode::Type> ScriptingModeWhenDone, bool bSetNewHomeLocation) {
    return false;
}

bool URsAIBlueprintLibrary::ScriptedMoveToActor(ARsAICharacter* AICharacter, const AActor* MoveTargetActor, FName MotionParmName, TEnumAsByte<ERsAIScriptingMode::Type> ScriptingMode, TEnumAsByte<ERsAIScriptingMode::Type> ScriptingModeWhenDone, bool bSetNewHomeLocation) {
    return false;
}

bool URsAIBlueprintLibrary::PlayAlertedVO(ARsAICharacter* AICharacter) {
    return false;
}

bool URsAIBlueprintLibrary::OverrideAggroStateDefinition(AActor* ControlledActor, URsAIAwarenessStateDefinition_Aggro* InOverride) {
    return false;
}

void URsAIBlueprintLibrary::MakeAISound(AActor* SourceActor, AActor* InstigatorActor, TEnumAsByte<ERsAISoundType::Type> SoundType, bool bIsHostile) {
}

bool URsAIBlueprintLibrary::IsLastEnemy(UObject* WorldContext) {
    return false;
}

bool URsAIBlueprintLibrary::IsInAIGameState(UObject* WorldContext, TEnumAsByte<ERsAIGameState::Type> GameState) {
    return false;
}

bool URsAIBlueprintLibrary::IsHostileTo(AActor* FirstActor, AActor* SecondActor) {
    return false;
}

bool URsAIBlueprintLibrary::IsFriendlyTo(AActor* FirstActor, AActor* SecondActor) {
    return false;
}

bool URsAIBlueprintLibrary::IsAlone(ARsAICharacter* AICharacter) {
    return false;
}

float URsAIBlueprintLibrary::GetTeamStrength(ARsAICharacter* AICharacter) {
    return 0.0f;
}

TArray<ARsAICharacter*> URsAIBlueprintLibrary::GetSubteamMembers(ARsAICharacter* AICharacter, bool bInclusive) {
    return TArray<ARsAICharacter*>();
}

ARsAIController* URsAIBlueprintLibrary::GetRsAIController(AActor* ControlledActor) {
    return NULL;
}

TArray<ARsAIPOI*> URsAIBlueprintLibrary::GetRegisteredPOIsForCharacter(UObject* WorldContext, const ARsAICharacter* AICharacter) {
    return TArray<ARsAIPOI*>();
}

TArray<ARsAIPOI*> URsAIBlueprintLibrary::GetRegisteredPOIs(UObject* WorldContext) {
    return TArray<ARsAIPOI*>();
}

TArray<ARsAICharacterSpawner*> URsAIBlueprintLibrary::GetPersistentCharacterSpawnersForLevelSequence(const ALevelSequenceActor* LevelSequenceActor) {
    return TArray<ARsAICharacterSpawner*>();
}

void URsAIBlueprintLibrary::GetCharactersAwareOf(ARsAICharacter* AICharacter, TArray<AActor*>& OutEnemies, TEnumAsByte<ERsAIAwarenessLevel::Type> MinimumAwarenessLevel) {
}

URsAISystem* URsAIBlueprintLibrary::GetAISystem(UObject* WorldContext) {
    return NULL;
}

TEnumAsByte<ERsAIScriptingMode::Type> URsAIBlueprintLibrary::GetAIScriptingMode(ARsAIController* AIController) {
    return ERsAIScriptingMode::None;
}

bool URsAIBlueprintLibrary::GetAIMoveTargetLocation(ARsAIController* AIController, FVector& Location) {
    return false;
}

bool URsAIBlueprintLibrary::GetAIMoveTargetActor(ARsAIController* AIController, AActor*& Actor) {
    return false;
}

URsAIGameStateManager* URsAIBlueprintLibrary::GetAIGameStateManager(UObject* WorldContext) {
    return NULL;
}

TEnumAsByte<ERsAIGameState::Type> URsAIBlueprintLibrary::GetAIGameState(UObject* WorldContext) {
    return ERsAIGameState::OutOfCombat;
}

bool URsAIBlueprintLibrary::GetAIFocusTargetLocation(ARsAIController* AIController, FVector& FocusLocation) {
    return false;
}

TEnumAsByte<ERsAIClass::Type> URsAIBlueprintLibrary::GetAIClass(ARsAIController* AIController) {
    return ERsAIClass::Melee;
}

TEnumAsByte<ERsAIAwarenessState::Type> URsAIBlueprintLibrary::GetAIAwarenessState(ARsAIController* AIController) {
    return ERsAIAwarenessState::None;
}

bool URsAIBlueprintLibrary::GetAIAttackTargetLocation(ARsAIController* AIController, FVector& Location) {
    return false;
}

bool URsAIBlueprintLibrary::GetAIAttackTargetActor(ARsAIController* AIController, AActor*& Actor) {
    return false;
}

bool URsAIBlueprintLibrary::GetAIAttackTarget(AActor* ControlledActor, AActor*& TargetActor, FVector& TargetLocation) {
    return false;
}

TArray<ARsCharacter*> URsAIBlueprintLibrary::FindAwarenessGroup(ARsAIController* AIController, TEnumAsByte<ERsCharacterType> CharacterType, float Radius) {
    return TArray<ARsCharacter*>();
}

FText URsAIBlueprintLibrary::DebugGenerateSpawnShortcutText() {
    return FText::GetEmpty();
}

void URsAIBlueprintLibrary::DebugEnableAI(UObject* WorldContext, bool bEnable) {
}

void URsAIBlueprintLibrary::ClearPatrolPath(ARsAIController* AIController) {
}

bool URsAIBlueprintLibrary::CheckCharacterOnScreenByCapsule(UObject* WorldContext, const ArsActor* Character, bool bDebugDraw, float DebugDrawDuration) {
    return false;
}

bool URsAIBlueprintLibrary::CanPlayAnimSequenceOnNavMesh(ARsAIController* AIController, const UAnimSequence* Animation) {
    return false;
}

bool URsAIBlueprintLibrary::CanPlayAnimMontageOnNavMesh(ARsAIController* AIController, const UAnimMontage* Montage) {
    return false;
}

float URsAIBlueprintLibrary::CalculateRootMotionDisplacement(const UAnimSequence* Sequence) {
    return 0.0f;
}

FVector2D URsAIBlueprintLibrary::CalculateAIBlendSpaceInput(ARsAIController* AIController, TEnumAsByte<ERsAIBlendspaceInputSource::Type> BlendSpaceType) {
    return FVector2D{};
}

void URsAIBlueprintLibrary::BecomeAwareOf(ARsAIController* AIController, AActor* ActorToBeAwareOf) {
}

bool URsAIBlueprintLibrary::AnyEnemiesAwareOf(ARsAICharacter* AICharacter) {
    return false;
}

URsAIBlueprintLibrary::URsAIBlueprintLibrary() {
    // Null default object.
}

