#pragma once
#include "CoreMinimal.h"
#include "AkComponent.h"
#include "RsFoliageAmbientComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsFoliageAmbientComponent : public UAkComponent {
    GENERATED_BODY()
public:
    URsFoliageAmbientComponent();
};

