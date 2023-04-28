#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AudioPolyPlane.generated.h"

USTRUCT(BlueprintType)
struct FAudioPolyPlane {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Normal;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> Tris;
    
    AKAUDIO_API FAudioPolyPlane();
};

