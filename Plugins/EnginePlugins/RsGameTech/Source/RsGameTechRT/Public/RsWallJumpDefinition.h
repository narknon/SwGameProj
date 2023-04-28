#pragma once
#include "CoreMinimal.h"
#include "RsJumpDefinition.h"
#include "RsWallJumpData.h"
#include "RsWallJumpDefinition.generated.h"

class URsJumpComponent;

UCLASS(Blueprintable)
class URsWallJumpDefinition : public URsJumpDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWallJumpData DefaultWallJumpData;
    
    URsWallJumpDefinition();
private:
    UFUNCTION(BlueprintCallable)
    void PushWallJumpBufferModifier(URsJumpComponent* JumpComponent);
    
};

