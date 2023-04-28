#pragma once
#include "CoreMinimal.h"
#include "RsAIPatrolPathBase.h"
#include "RsAISplinePatrolPath.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class ARsAISplinePatrolPath : public ARsAIPatrolPathBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
public:
    ARsAISplinePatrolPath();
};

