#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SwGameDestructibleActorSaveGameState_ComponentState.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwGameDestructibleActorSaveGameState_ComponentState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 m_Active: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 m_HiddenInGame: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionEnabled::Type> m_CollisionSettings;
    
    FSwGameDestructibleActorSaveGameState_ComponentState();
};

