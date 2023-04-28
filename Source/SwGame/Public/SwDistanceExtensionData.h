#pragma once
#include "CoreMinimal.h"
#include "SwDistanceExtensionData.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwDistanceExtensionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSpeedToConsiderExtending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxExtension;
    
    FSwDistanceExtensionData();
};

