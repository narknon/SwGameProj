#pragma once
#include "CoreMinimal.h"
#include "SwArcTargetingData.h"
#include "SwTargetingProfile.h"
#include "SwArcTargeting.generated.h"

UCLASS(Blueprintable)
class SWGAME_API USwArcTargeting : public USwTargetingProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwArcTargetingData Data;
    
    USwArcTargeting();
};

