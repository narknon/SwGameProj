#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RsAbilityEffectVictimData.generated.h"

UCLASS(Abstract, Blueprintable, HideDropdown)
class SWGAME_API URsAbilityEffectVictimData : public UDataAsset {
    GENERATED_BODY()
public:
    URsAbilityEffectVictimData();
};

