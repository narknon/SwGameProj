#pragma once
#include "CoreMinimal.h"
#include "SwLiftCharacterGameplayVictimData.h"
#include "SwLiftLevelObjectGameplayVictimData.h"
#include "SwLiftGameplayVictimData.generated.h"

USTRUCT(BlueprintType)
struct FSwLiftGameplayVictimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwLiftLevelObjectGameplayVictimData LevelObjectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwLiftCharacterGameplayVictimData CharacterData;
    
    SWGAME_API FSwLiftGameplayVictimData();
};

