#pragma once
#include "CoreMinimal.h"
#include "RsAILeashingActor.h"
#include "RsAILeashingBox.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class ARsAILeashingBox : public ARsAILeashingActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    ARsAILeashingBox();
};

