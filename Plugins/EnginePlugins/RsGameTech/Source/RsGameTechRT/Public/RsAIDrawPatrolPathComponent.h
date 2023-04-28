#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "RsAIDrawPatrolPathComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsAIDrawPatrolPathComponent : public USphereComponent {
    GENERATED_BODY()
public:
    URsAIDrawPatrolPathComponent();
};

