#pragma once
#include "CoreMinimal.h"
#include "RsAILeashingActor.h"
#include "RsAILeashingCylinder.generated.h"

class URsCylinderComponent;

UCLASS(Blueprintable)
class ARsAILeashingCylinder : public ARsAILeashingActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsCylinderComponent* CylinderComponent;
    
    ARsAILeashingCylinder();
};

