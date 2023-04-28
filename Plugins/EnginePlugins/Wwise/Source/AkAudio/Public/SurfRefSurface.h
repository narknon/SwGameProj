#pragma once
#include "CoreMinimal.h"
#include "SurfRefSurface.generated.h"

USTRUCT(BlueprintType)
struct FSurfRefSurface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 textureID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Occlusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TriangleName;
    
    AKAUDIO_API FSurfRefSurface();
};

