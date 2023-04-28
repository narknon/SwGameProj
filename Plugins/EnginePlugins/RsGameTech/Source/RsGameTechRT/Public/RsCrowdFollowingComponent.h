#pragma once
#include "CoreMinimal.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "RsCrowdFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsCrowdFollowingComponent : public UCrowdFollowingComponent {
    GENERATED_BODY()
public:
    URsCrowdFollowingComponent();
};

