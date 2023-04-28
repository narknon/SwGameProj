#pragma once
#include "CoreMinimal.h"
#include "SurfRefTriangle.generated.h"

USTRUCT(BlueprintType)
struct FSurfRefTriangle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Vertices[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Surface;
    
    AKAUDIO_API FSurfRefTriangle();
};

