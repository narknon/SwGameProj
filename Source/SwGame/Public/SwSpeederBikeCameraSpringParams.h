#pragma once
#include "CoreMinimal.h"
#include "RsCameraSpringParams.h"
#include "SwSpeederBikeCameraSpringParams.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwSpeederBikeCameraSpringParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCameraSpringParams Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCameraSpringParams Boost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Substeps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    FSwSpeederBikeCameraSpringParams();
};

