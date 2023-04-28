#pragma once
#include "CoreMinimal.h"
#include "RsJumpData.h"
#include "RsJumpDefinition.h"
#include "RsHorizontalSwingJumpDefinition.generated.h"

UCLASS(Blueprintable)
class URsHorizontalSwingJumpDefinition : public URsJumpDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsJumpData JumpData;
    
    URsHorizontalSwingJumpDefinition();
};

