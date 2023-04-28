#pragma once
#include "CoreMinimal.h"
#include "CustomizationStreamingMaterial.h"
#include "CustomizationMaterialInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct RSTECHRT_API FCustomizationMaterialInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CustomizationMaterialName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> UITexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* UITexturePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FCustomizationStreamingMaterial> OverrideMaterials;
    
    FCustomizationMaterialInfo();
};

