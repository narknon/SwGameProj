#pragma once
#include "CoreMinimal.h"
#include "SwLiftSlamCharacterGameplayVictimData.h"
#include "SwLiftSlamLevelObjectGameplayVictimData.h"
#include "SwLiftSlamGameplayVictimData.generated.h"

USTRUCT(BlueprintType)
struct FSwLiftSlamGameplayVictimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwLiftSlamLevelObjectGameplayVictimData LevelObjectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwLiftSlamCharacterGameplayVictimData CharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalTargetRadius;
    
    SWGAME_API FSwLiftSlamGameplayVictimData();
};

