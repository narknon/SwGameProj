#pragma once
#include "CoreMinimal.h"
#include "ERoomType.generated.h"

UENUM(BlueprintType)
enum class ERoomType : uint8 {
    Canyon,
    Forest,
    Gen_Indoor,
    Gen_Outdoor,
    Indoor_large,
};

