#pragma once
#include "CoreMinimal.h"
#include "CustomizationStreamingMaterial.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FCustomizationStreamingMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> MaterialInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialInterfacePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialSlotName;
    
    RSTECHRT_API FCustomizationStreamingMaterial();
};

