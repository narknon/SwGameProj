#pragma once
#include "CoreMinimal.h"
#include "RsJSONTweaksBook.h"
#include "RsMotionInfluenceParm.h"
#include "RsPersistentTweaksBook.generated.h"

UCLASS(Blueprintable)
class URsPersistentTweaksBook : public URsJSONTweaksBook {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRsMotionInfluenceParm> MotionParm;
    
    URsPersistentTweaksBook();
};

