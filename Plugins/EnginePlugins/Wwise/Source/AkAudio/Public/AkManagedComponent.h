#pragma once
#include "CoreMinimal.h"
#include "AkGameObject.h"
#include "AkManagedComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAkManagedComponent : public UAkGameObject {
    GENERATED_BODY()
public:
    UAkManagedComponent();
};

