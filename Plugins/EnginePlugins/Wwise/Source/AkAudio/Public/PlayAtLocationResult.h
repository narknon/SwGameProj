#pragma once
#include "CoreMinimal.h"
#include "PlayAtLocationResult.generated.h"

class UAkComponent;

USTRUCT(BlueprintType)
struct AKAUDIO_API FPlayAtLocationResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayingID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    FPlayAtLocationResult();
};

