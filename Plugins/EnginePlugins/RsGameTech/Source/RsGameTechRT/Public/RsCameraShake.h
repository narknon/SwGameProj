#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RsCameraShake.generated.h"

class UMatineeCameraShake;

USTRUCT(BlueprintType)
struct FRsCameraShake {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> Shake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Falloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOrientShakeTowardsEpicenter;
    
    RSGAMETECHRT_API FRsCameraShake();
};

