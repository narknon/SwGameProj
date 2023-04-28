#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "RsAICharacterSpawnerRenderComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsAICharacterSpawnerRenderComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    URsAICharacterSpawnerRenderComponent();
};

