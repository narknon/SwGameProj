#pragma once
#include "CoreMinimal.h"
#include "ERsChemistryProperty.generated.h"

UENUM(BlueprintType)
namespace ERsChemistryProperty {
    enum Type {
        ElectricityConductible,
        ElectricityNetwork,
        ElectricitySource,
        Flammable,
        Count,
    };
}

