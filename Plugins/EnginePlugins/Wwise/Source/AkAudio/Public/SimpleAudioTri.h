#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SimpleAudioTri.generated.h"

USTRUCT(BlueprintType)
struct FSimpleAudioTri {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector V0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector v1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector v2;
    
    AKAUDIO_API FSimpleAudioTri();
};

