#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SwAIControllerForSpeederBike.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwAIControllerForSpeederBike : public UActorComponent {
    GENERATED_BODY()
public:
    USwAIControllerForSpeederBike();
};

