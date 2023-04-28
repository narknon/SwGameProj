#pragma once
#include "CoreMinimal.h"
#include "RsCameraAnimLayerData.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsCameraAnimLayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TranslationIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bValid;
    
    FRsCameraAnimLayerData();
};

