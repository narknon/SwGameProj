#pragma once
#include "CoreMinimal.h"
#include "RsMotionMatchKineticBaseComponent.h"
#include "RsMotionMatchKineticStateProvider.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsMotionMatchKineticStateProvider : public URsMotionMatchKineticBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float speedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentCharacterRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClampTrajectoryToGoal;
    
    URsMotionMatchKineticStateProvider();
};

