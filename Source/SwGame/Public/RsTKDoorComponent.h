#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RsTKDoorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsTKDoorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    URsTKDoorComponent();
};

