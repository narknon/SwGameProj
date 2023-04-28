#pragma once
#include "CoreMinimal.h"
#include "RsDynamicTextureComponentTarget.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsDynamicTextureComponentTarget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMeshComponent> Component;
    
    FRsDynamicTextureComponentTarget();
};

