#pragma once
#include "CoreMinimal.h"
#include "ERsAIEncounterMemberState.generated.h"

UENUM(BlueprintType)
enum ERsAIEncounterMemberState {
    Alive,
    Dead,
    AliveButDestroyed,
    AliveButNonHostile,
    CorpseDestroyed,
    LeftSpawningArea,
};

