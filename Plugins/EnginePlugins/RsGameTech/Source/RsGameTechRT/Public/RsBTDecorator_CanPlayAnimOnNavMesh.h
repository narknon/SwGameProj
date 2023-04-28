#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "RsBTDecorator_CanPlayAnimOnNavMesh.generated.h"

class UAnimationAsset;

UCLASS(Blueprintable)
class URsBTDecorator_CanPlayAnimOnNavMesh : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* AnimationAsset;
    
public:
    URsBTDecorator_CanPlayAnimOnNavMesh();
};

