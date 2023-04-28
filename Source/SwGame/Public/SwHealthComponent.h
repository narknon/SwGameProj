#pragma once
#include "CoreMinimal.h"
#include "RsHealthComponent.h"
#include "SwHealthComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SWGAME_API USwHealthComponent : public URsHealthComponent {
    GENERATED_BODY()
public:
    USwHealthComponent();
};

