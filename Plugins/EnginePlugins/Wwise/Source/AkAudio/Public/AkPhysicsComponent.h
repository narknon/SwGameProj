#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AkPhysicsComponent.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAkPhysicsComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UAkPhysicsComponent();
};

