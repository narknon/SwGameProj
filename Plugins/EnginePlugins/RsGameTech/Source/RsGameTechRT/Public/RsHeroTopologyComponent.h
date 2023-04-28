#pragma once
#include "CoreMinimal.h"
#include "RsHeroComponent.h"
#include "RsHeroTopologyComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsHeroTopologyComponent : public URsHeroComponent {
    GENERATED_BODY()
public:
    URsHeroTopologyComponent();
};

