#pragma once
#include "CoreMinimal.h"
#include "ERsAttributeTagEventType.generated.h"

UENUM(BlueprintType)
namespace ERsAttributeTagEventType {
    enum Type {
        NewOrRemoved,
        AnyCountChange,
    };
}

