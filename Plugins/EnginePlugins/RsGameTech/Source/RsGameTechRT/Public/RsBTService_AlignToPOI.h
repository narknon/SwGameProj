#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "RsBTService_AlignToPOI.generated.h"

UCLASS(Blueprintable)
class URsBTService_AlignToPOI : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreAlignmentInZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseActorMotionRotation;
    
public:
    URsBTService_AlignToPOI();
};

