#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SwAutoPlayerTelemetryFrame.generated.h"

USTRUCT(BlueprintType)
struct FSwAutoPlayerTelemetryFrame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraYaw;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Time;
    
    SWGAME_API FSwAutoPlayerTelemetryFrame();
};

