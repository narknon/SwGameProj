#pragma once
#include "CoreMinimal.h"
#include "RsPinTelemetryPlatformSettings.generated.h"

USTRUCT(BlueprintType)
struct FRsPinTelemetryPlatformSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Domain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TitleID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NetServiceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupName;
    
    SWGAME_API FRsPinTelemetryPlatformSettings();
};

