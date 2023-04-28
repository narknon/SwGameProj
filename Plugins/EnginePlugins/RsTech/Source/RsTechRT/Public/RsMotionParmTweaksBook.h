#pragma once
#include "CoreMinimal.h"
#include "RsMotionInfluenceParm.h"
#include "RsTweaksBook.h"
#include "RsMotionParmTweaksBook.generated.h"

UCLASS(Blueprintable, NonTransient)
class URsMotionParmTweaksBook : public URsTweaksBook {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRsMotionInfluenceParm> MotionInfluence;
    
    URsMotionParmTweaksBook();
};

