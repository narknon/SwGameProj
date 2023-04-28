#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SwForceLiftUpgradeData.generated.h"

class USwForceLiftAbilityEffect_AnalogLevelObject;
class USwForceLiftAbilityEffect_Character;
class USwForceLiftAbilityEffect_CharacterOverriden;
class USwForceLiftAbilityEffect_LevelObject;
class USwForceLiftAbilityEffect_LevelObjectOverriden;

USTRUCT(BlueprintType)
struct FSwForceLiftUpgradeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USwForceLiftAbilityEffect_Character> CharacterEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USwForceLiftAbilityEffect_CharacterOverriden> CharacterOverridenEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USwForceLiftAbilityEffect_LevelObject> LevelObjectEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USwForceLiftAbilityEffect_LevelObjectOverriden> LevelObjectOverridenEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USwForceLiftAbilityEffect_AnalogLevelObject> AnalogLevelObjectEffect;
    
    SWGAME_API FSwForceLiftUpgradeData();
};

