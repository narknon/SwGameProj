#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "RsActorRootComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsActorRootComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    URsActorRootComponent();
};

