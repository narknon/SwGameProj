#pragma once
#include "CoreMinimal.h"
#include "RsAISensorDefinition.h"
#include "RsAISensorDefinition_Touch.generated.h"

UCLASS(Blueprintable)
class URsAISensorDefinition_Touch : public URsAISensorDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AwarenessValue;
    
public:
    URsAISensorDefinition_Touch();
};

