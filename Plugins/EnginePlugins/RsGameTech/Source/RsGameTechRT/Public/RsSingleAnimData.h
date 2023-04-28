#pragma once
#include "CoreMinimal.h"
#include "RsCharacterAnimationData.h"
#include "RsDirectionalAnimData.h"
#include "RsSingleAnimData.generated.h"

UCLASS(Blueprintable)
class URsSingleAnimData : public URsDirectionalAnimData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData AnimationData;
    
public:
    URsSingleAnimData();
};

