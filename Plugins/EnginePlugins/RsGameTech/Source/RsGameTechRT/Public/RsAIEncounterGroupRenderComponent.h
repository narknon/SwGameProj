#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "RsAIEncounterGroupRenderComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsAIEncounterGroupRenderComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    URsAIEncounterGroupRenderComponent();
};

