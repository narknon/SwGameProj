#pragma once
#include "CoreMinimal.h"
#include "ERsCameraIsInputActiveInputType.h"
#include "RsCameraConditional.h"
#include "RsCameraConditional_IsInputActive.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class URsCameraConditional_IsInputActive : public URsCameraConditional {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeactivateAfter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsCameraIsInputActiveInputType ActivationInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsCameraIsInputActiveInputType DeactivationInputType;
    
public:
    URsCameraConditional_IsInputActive();
};

