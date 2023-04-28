#pragma once
#include "CoreMinimal.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "RsPlatformMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsPlatformMovementComponent : public UCrowdFollowingComponent {
    GENERATED_BODY()
public:
    URsPlatformMovementComponent();
};

