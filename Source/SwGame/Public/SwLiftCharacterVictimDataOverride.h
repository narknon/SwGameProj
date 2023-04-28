#pragma once
#include "CoreMinimal.h"
#include "ESwLiftEnterModifierType.h"
#include "SwFloatCharacterVictimDataOverride.h"
#include "SwLiftStruggleCharacterVictimDataOverride.h"
#include "SwLiftCharacterVictimDataOverride.generated.h"

USTRUCT(BlueprintType)
struct FSwLiftCharacterVictimDataOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideLiftEnterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwLiftEnterModifierType LiftEnterModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideStruggleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwLiftStruggleCharacterVictimDataOverride StruggleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideFloatData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwFloatCharacterVictimDataOverride FloatData;
    
    SWGAME_API FSwLiftCharacterVictimDataOverride();
};

