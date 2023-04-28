#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ESwDestructibleActorDamageSourceType.h"
#include "SwGameDestructibleActorSaveGameState_PerDestructionPhase.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwGameDestructibleActorSaveGameState_PerDestructionPhase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<ECollisionEnabled::Type>> m_ComponentsToShowOriginalCollisionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ComponentsToStartPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ESwDestructibleActorDamageSourceType m_DamageSourceType;
    
    FSwGameDestructibleActorSaveGameState_PerDestructionPhase();
};

