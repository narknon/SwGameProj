#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SwAutoPlayerTelemetryFrame.h"
#include "SwAutoPlayerTelemetrySession.generated.h"

USTRUCT(BlueprintType)
struct FSwAutoPlayerTelemetrySession {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwAutoPlayerTelemetryFrame> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    SWGAME_API FSwAutoPlayerTelemetrySession();
};

