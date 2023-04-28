#pragma once
#include "CoreMinimal.h"
#include "ERsCombatState.generated.h"

UENUM(BlueprintType)
namespace ERsCombatState {
    enum Type {
        Neutral,
        Attacking,
        Reaction,
        Blocking,
        Parrying,
        ParrySuccess,
        Evading,
        Stunned,
        Telekinesis,
        UsingForce,
        CodeCombatStateCount,
        CustomCombatState1 = 0x20,
        CustomCombatState2,
        CustomCombatState3,
        CustomCombatState4,
        CustomCombatState5,
        CustomCombatState6,
        CustomCombatState7,
        CustomCombatState8,
        CustomCombatState9,
        CustomCombatState10,
        CustomCombatState11,
        CustomCombatState12,
        CustomCombatState13,
        CustomCombatState14,
        CustomCombatState15,
        CustomCombatState16,
        CustomCombatState17,
        CustomCombatState18,
        CustomCombatState19,
        CustomCombatState20,
        CustomCombatState21,
        CustomCombatState22,
        CustomCombatState23,
        CustomCombatState24,
        CustomCombatState25,
        CustomCombatState26,
        CustomCombatState27,
        CustomCombatState28,
        CustomCombatState29,
        CustomCombatState30,
        CustomCombatState31,
        CustomCombatState32,
        CustomCombatState_Max,
    };
}

