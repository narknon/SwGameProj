#pragma once
#include "CoreMinimal.h"
#include "ESwSlamVictimType.h"
#include "SwSlamFlooredCharacterVictimDataOverride.h"
#include "SwSlamCharacterVictimDataOverride.generated.h"

USTRUCT(BlueprintType)
struct FSwSlamCharacterVictimDataOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideSlamType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwSlamVictimType SlamType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideSlamFloored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSlamFlooredCharacterVictimDataOverride FlooredData;
    
    SWGAME_API FSwSlamCharacterVictimDataOverride();
};

