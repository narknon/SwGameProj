#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OilIgnitionAudioInfo.generated.h"

USTRUCT(BlueprintType)
struct FOilIgnitionAudioInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IgnitionTime;
    
    RSGAMETECHRT_API FOilIgnitionAudioInfo();
};

