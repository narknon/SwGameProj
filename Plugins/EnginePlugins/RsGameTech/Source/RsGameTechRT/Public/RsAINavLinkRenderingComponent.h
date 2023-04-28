#pragma once
#include "CoreMinimal.h"
#include "NavLinkRenderingComponent.h"
#include "RsAINavLinkRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsAINavLinkRenderingComponent : public UNavLinkRenderingComponent {
    GENERATED_BODY()
public:
    URsAINavLinkRenderingComponent();
};

