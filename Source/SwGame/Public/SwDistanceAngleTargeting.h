#pragma once
#include "CoreMinimal.h"
#include "SwDistanceAngleTargetingData.h"
#include "SwTargetingProfile.h"
#include "SwDistanceAngleTargeting.generated.h"

UCLASS(Blueprintable)
class USwDistanceAngleTargeting : public USwTargetingProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwDistanceAngleTargetingData Data;
    
    USwDistanceAngleTargeting();
};

