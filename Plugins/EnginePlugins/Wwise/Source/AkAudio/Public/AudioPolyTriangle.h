#pragma once
#include "CoreMinimal.h"
#include "AudioPolyTriangle.generated.h"

USTRUCT(BlueprintType)
struct FAudioPolyTriangle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Vertices[3];
    
    AKAUDIO_API FAudioPolyTriangle();
};

