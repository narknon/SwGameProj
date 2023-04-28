#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_ConvertToRagdoll.generated.h"

UCLASS(Blueprintable)
class UAnimNotify_ConvertToRagdoll : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeferPhysicsStartUntilEndOfFrame;
    
public:
    UAnimNotify_ConvertToRagdoll();
};

