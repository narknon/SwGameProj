#pragma once
#include "CoreMinimal.h"
#include "FloatingInWaterLowResPoolElement.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FFloatingInWaterLowResPoolElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* SpawnedLowResComponent;
    
    SWGAME_API FFloatingInWaterLowResPoolElement();
};

