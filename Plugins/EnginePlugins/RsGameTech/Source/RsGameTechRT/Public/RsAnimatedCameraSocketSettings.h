#pragma once
#include "CoreMinimal.h"
#include "RsAnimatedCameraSocketSettings.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAnimatedCameraSocketSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FOVCurveName;
    
    FRsAnimatedCameraSocketSettings();
};

