#pragma once
#include "CoreMinimal.h"
#include "ESwDestructibleActorParallelStateType.h"
#include "SwGameDestructibleActorSaveGameState_ActorUndamagedState.h"
#include "SwGameDestructibleActorSaveGameState_PerDestructionPhase.h"
#include "SwGameDestructibleActorSaveGameState_PerDestructionPiece.h"
#include "SwGameDestructibleActorSaveGameState.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwGameDestructibleActorSaveGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 m_SavedEncountersInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 m_FirstPhaseIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 m_NumValidPhases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 m_ParallelStatesInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ESwDestructibleActorParallelStateType m_ActiveParallelStateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float m_TotalDamagePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 m_TotalNumberOfHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FSwGameDestructibleActorSaveGameState_PerDestructionPhase> m_SavedStatePerDestructionPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FSwGameDestructibleActorSaveGameState_PerDestructionPiece> m_SavedStatePerDestructionPiece;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> m_StartedPhysicsOnHitBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSwGameDestructibleActorSaveGameState_ActorUndamagedState m_ActorUndamagedState;
    
    FSwGameDestructibleActorSaveGameState();
};

