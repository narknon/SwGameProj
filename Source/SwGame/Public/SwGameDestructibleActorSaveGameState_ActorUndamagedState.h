#pragma once
#include "CoreMinimal.h"
#include "SwGameDestructibleActorSaveGameState_ComponentState.h"
#include "SwGameDestructibleActorSaveGameState_ActorUndamagedState.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwGameDestructibleActorSaveGameState_ActorUndamagedState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 m_CanBeDamaged: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 m_CanTakeNumericDamage: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FSwGameDestructibleActorSaveGameState_ComponentState> m_UndamagedStateOfComponents;
    
    FSwGameDestructibleActorSaveGameState_ActorUndamagedState();
};

