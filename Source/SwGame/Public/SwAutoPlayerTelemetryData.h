#pragma once
#include "CoreMinimal.h"
#include "SwAutoPlayerTelemetrySession.h"
#include "SwAutoPlayerTelemetryData.generated.h"

USTRUCT(BlueprintType)
struct FSwAutoPlayerTelemetryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwAutoPlayerTelemetrySession> Sessions;
    
    SWGAME_API FSwAutoPlayerTelemetryData();
};

