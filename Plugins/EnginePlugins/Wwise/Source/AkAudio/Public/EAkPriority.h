#pragma once
#include "CoreMinimal.h"
#include "EAkPriority.generated.h"

UENUM(BlueprintType)
enum class EAkPriority : uint8 {
    P_00_Min,
    P_01_Outdoor,
    P_02_Outdoor,
    P_03_Outdoor,
    P_04_Outdoor,
    P_05_Outdoor,
    P_06_Outdoor,
    P_07_Outdoor,
    P_08_Outdoor,
    P_09_Outdoor,
    P_10_Indoor,
    P_11_Indoor,
    P_12_Indoor,
    P_13_Indoor,
    P_14_Indoor,
    P_15_Indoor,
    P_16_Indoor,
    P_17_Indoor,
    P_18_Indoor,
    P_19_Indoor,
    P_20_Max,
    P_MAX UMETA(Hidden),
};

