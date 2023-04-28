#pragma once
#include "CoreMinimal.h"
#include "EFSR2HistoryFormat.generated.h"

UENUM(BlueprintType)
enum class EFSR2HistoryFormat : uint8 {
    FloatRGBA,
    FloatR11G11B10,
};

