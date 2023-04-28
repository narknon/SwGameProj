#pragma once
#include "CoreMinimal.h"
#include "RsCameraShakeInstance.generated.h"

class UCameraShakeBase;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsCameraShakeInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraShakeBase* Shake;
    
    FRsCameraShakeInstance();
};

