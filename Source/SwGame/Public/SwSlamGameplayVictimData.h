#pragma once
#include "CoreMinimal.h"
#include "SwSlamCharacterGameplayVictimData.h"
#include "SwSlamLevelObjectGameplayVictimData.h"
#include "SwSlamGameplayVictimData.generated.h"

USTRUCT(BlueprintType)
struct FSwSlamGameplayVictimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSlamLevelObjectGameplayVictimData LevelObjectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSlamCharacterGameplayVictimData CharacterData;
    
    SWGAME_API FSwSlamGameplayVictimData();
};

