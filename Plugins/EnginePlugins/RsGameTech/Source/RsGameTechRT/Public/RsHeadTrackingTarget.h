#pragma once
#include "CoreMinimal.h"
#include "RsHeadTrackingTarget.generated.h"

class AActor;
class ARsCharacter;
class USceneComponent;

USTRUCT(BlueprintType)
struct FRsHeadTrackingTarget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> LookAtTargetActor;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> LookAtTargetComponent;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARsCharacter> LookatTargetCharacter;
    
public:
    RSGAMETECHRT_API FRsHeadTrackingTarget();
};

