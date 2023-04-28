#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SwForceSlamUpgradeData.generated.h"

class USwForceSlamAbilityEffect_AnalogLevelObject;
class USwForceSlamAbilityEffect_Character;
class USwForceSlamAbilityEffect_CharacterOverriden;
class USwForceSlamAbilityEffect_LevelObject;
class USwForceSlamAbilityEffect_LevelObjectOverriden;

USTRUCT(BlueprintType)
struct FSwForceSlamUpgradeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USwForceSlamAbilityEffect_Character> CharacterEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USwForceSlamAbilityEffect_CharacterOverriden> CharacterOverridenEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USwForceSlamAbilityEffect_LevelObject> LevelObjectEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USwForceSlamAbilityEffect_LevelObjectOverriden> LevelObjectOverridenEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USwForceSlamAbilityEffect_AnalogLevelObject> AnalogLevelObjectEffect;
    
    SWGAME_API FSwForceSlamUpgradeData();
};

