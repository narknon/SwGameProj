#pragma once
#include "CoreMinimal.h"
#include "RsAISensorDefinition.h"
#include "RsAIVisionSettings.h"
#include "RsAISensorDefinition_Vision.generated.h"

UCLASS(Blueprintable)
class URsAISensorDefinition_Vision : public URsAISensorDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIVisionSettings AmbientSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIVisionSettings AlertSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIVisionSettings AggroSettings;
    
public:
    URsAISensorDefinition_Vision();
};

