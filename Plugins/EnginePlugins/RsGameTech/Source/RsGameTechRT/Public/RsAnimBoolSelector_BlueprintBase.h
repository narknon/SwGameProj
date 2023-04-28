#pragma once
#include "CoreMinimal.h"
#include "RsAnimAssetSelector_Bool.h"
#include "RsAnimBoolSelector_BlueprintBase.generated.h"

class ARsAICharacter;

UCLASS(Blueprintable)
class URsAnimBoolSelector_BlueprintBase : public URsAnimAssetSelector_Bool {
    GENERATED_BODY()
public:
    URsAnimBoolSelector_BlueprintBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ReceivedEvaluateCondition(const ARsAICharacter* AICharacter) const;
    
};

