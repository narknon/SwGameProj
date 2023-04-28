#pragma once
#include "CoreMinimal.h"
#include "NavigationSystem.h"
#include "RsNavigationSystem.generated.h"

class ANavigationData;
class ARsPlatformNavData;

UCLASS(Blueprintable)
class URsNavigationSystem : public UNavigationSystemV1 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANavigationData* FlyingAbstractNavData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARsPlatformNavData* PlatformingNavData;
    
public:
    URsNavigationSystem();
};

