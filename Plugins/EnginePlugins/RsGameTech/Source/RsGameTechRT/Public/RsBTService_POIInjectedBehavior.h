#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "RsBTService_POIInjectedBehavior.generated.h"

UCLASS(Blueprintable)
class URsBTService_POIInjectedBehavior : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePOIWhenDeactivated;
    
public:
    URsBTService_POIInjectedBehavior();
};

