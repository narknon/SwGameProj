#pragma once
#include "CoreMinimal.h"
#include "RsAISensorDefinition.h"
#include "RsAISensorDefinition_Transference.generated.h"

UCLASS(Blueprintable)
class URsAISensorDefinition_Transference : public URsAISensorDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDegreesOfTransference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeWindowForTransference;
    
    URsAISensorDefinition_Transference();
};

