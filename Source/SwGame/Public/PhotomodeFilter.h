#pragma once
#include "CoreMinimal.h"
#include "PhotomodeFilter.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FPhotomodeFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FilterText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* FilterMaterial;
    
    SWGAME_API FPhotomodeFilter();
};

