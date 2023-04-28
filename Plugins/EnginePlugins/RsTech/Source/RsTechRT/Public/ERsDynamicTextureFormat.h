#pragma once
#include "CoreMinimal.h"
#include "ERsDynamicTextureFormat.generated.h"

UENUM(BlueprintType)
enum ERsDynamicTextureFormat {
    RsDTF_R,
    RsDTF_RGB,
    RsDTF_RGBA,
    RsDTF_MAX UMETA(Hidden),
};

