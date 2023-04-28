#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ERsAISoundType.h"
#include "RsAISoundEvents.generated.h"

UCLASS(Blueprintable)
class URsAISoundEvents : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAISoundType::Type> FootstepBig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAISoundType::Type> FootstepSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootstepBigThresholdSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NavStateFilter;
    
    URsAISoundEvents();
};

