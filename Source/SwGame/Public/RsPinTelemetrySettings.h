#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "RsPinTelemetryPlatformSettings.h"
#include "RsPinTelemetrySettings.generated.h"

UCLASS(Blueprintable)
class URsPinTelemetrySettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PinTestServerAddress;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PinShippingServerAddress;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PinServerPort;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeartbeatInterval;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPinTelemetryPlatformSettings PlatformSettings[5];
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> GameWorldNameMap;
    
public:
    URsPinTelemetrySettings();
};

