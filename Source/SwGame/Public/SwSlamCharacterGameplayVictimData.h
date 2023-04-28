#pragma once
#include "CoreMinimal.h"
#include "ESwSlamVictimType.h"
#include "SwSlamCharacterData.h"
#include "SwSlamStaggerCharacterData.h"
#include "SwSlamCharacterGameplayVictimData.generated.h"

USTRUCT(BlueprintType)
struct FSwSlamCharacterGameplayVictimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwSlamVictimType SlamType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSlamCharacterData SlamCharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSlamStaggerCharacterData SlamStaggerCharacterData;
    
    SWGAME_API FSwSlamCharacterGameplayVictimData();
};

