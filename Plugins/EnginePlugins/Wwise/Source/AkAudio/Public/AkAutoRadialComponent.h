#pragma once
#include "CoreMinimal.h"
#include "AkComponent.h"
#include "AkAutoRadialComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAkAutoRadialComponent : public UAkComponent {
    GENERATED_BODY()
public:
    UAkAutoRadialComponent();
};

