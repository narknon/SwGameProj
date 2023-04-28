#pragma once
#include "CoreMinimal.h"
#include "EAkAffinityMask.generated.h"

UENUM(BlueprintType)
enum class EAkAffinityMask : uint8 {
    EAM_Processor_0,
    EAM_Processor_1,
    EAM_Processor_2,
    EAM_Processor_3,
    EAM_Processor_4,
    EAM_Processor_5,
    EAM_Processor_MAX UMETA(Hidden),
};

