#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/PrimitiveComponent.h"
#include "SwForceHighlightComponent.generated.h"

UCLASS(Blueprintable, Deprecated, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SWGAME_API UDEPRECATED_SwForceHighlightComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UDEPRECATED_SwForceHighlightComponent();
    UFUNCTION(BlueprintCallable)
    void SetBoxExtent(FVector InBoxExtent);
    
};

