#pragma once
#include "CoreMinimal.h"
#include "ERsCombatState.h"
#include "RsCombatStateChangedDelegate.generated.h"

class ARsCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRsCombatStateChanged, ARsCharacter*, Character, TEnumAsByte<ERsCombatState::Type>, PreviousCombatState, TEnumAsByte<ERsCombatState::Type>, NewCombatState);

