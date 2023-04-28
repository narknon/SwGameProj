#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RsPhysicalAnimationBaseComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsPhysicalAnimationBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    URsPhysicalAnimationBaseComponent();
};

