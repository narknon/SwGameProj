#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RsSplineCameraOrigin.generated.h"

class URsSplineCameraDefinition;

UCLASS(Blueprintable)
class ARsSplineCameraOrigin : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsSplineCameraDefinition* SplineCameraDefinition;
    
public:
    ARsSplineCameraOrigin();
};

