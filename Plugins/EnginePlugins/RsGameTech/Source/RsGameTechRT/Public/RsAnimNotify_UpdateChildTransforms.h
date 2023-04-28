#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "RsAnimNotify_UpdateChildTransforms.generated.h"

UCLASS(Blueprintable)
class URsAnimNotify_UpdateChildTransforms : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UpdateChildTransforms;
    
    URsAnimNotify_UpdateChildTransforms();
};

