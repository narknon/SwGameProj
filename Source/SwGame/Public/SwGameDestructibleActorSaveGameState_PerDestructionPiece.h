#pragma once
#include "CoreMinimal.h"
#include "SwGameDestructibleActorSaveGameState_PerDestructionPiece.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwGameDestructibleActorSaveGameState_PerDestructionPiece {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_Destructed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float m_CurrentDamagePoints;
    
    FSwGameDestructibleActorSaveGameState_PerDestructionPiece();
};

