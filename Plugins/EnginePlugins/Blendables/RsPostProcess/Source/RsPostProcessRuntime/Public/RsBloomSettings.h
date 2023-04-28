#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Scene.h"
#include "RsBloomSettings.generated.h"

class UTexture;
class UTexture2D;

USTRUCT(BlueprintType)
struct FRsBloomSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_BloomMethod: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_BloomIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_BloomThreshold: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_Bloom1Tint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_Bloom1Size: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_Bloom2Size: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_Bloom2Tint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_Bloom3Tint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_Bloom3Size: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_Bloom4Tint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_Bloom4Size: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_Bloom5Tint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_Bloom5Size: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_Bloom6Tint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_Bloom6Size: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_BloomSizeScale: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_BloomShape: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_BloomStretch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_BloomConvolutionTexture: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_BloomConvolutionSize: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_BloomConvolutionCenterUV: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_BloomConvolutionPreFilterMin: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_BloomConvolutionPreFilterMax: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_BloomConvolutionPreFilterMult: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_BloomConvolutionBufferScale: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_BloomDirtMask: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_BloomDirtMaskIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_BloomDirtMaskTint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_LensFlareIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_LensFlareTint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_LensFlareTints: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_LensFlareBokehSize: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_LensFlareBokehShape: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_LensFlareThreshold: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBloomMethod> BloomMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BloomIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BloomThreshold;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BloomSizeScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BloomShape;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BloomStretch;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Bloom1Size;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Bloom2Size;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Bloom3Size;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Bloom4Size;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Bloom5Size;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Bloom6Size;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Bloom1Tint;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Bloom2Tint;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Bloom3Tint;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Bloom4Tint;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Bloom5Tint;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Bloom6Tint;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BloomConvolutionSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BloomConvolutionTexture;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D BloomConvolutionCenterUV;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BloomConvolutionPreFilterMin;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BloomConvolutionPreFilterMax;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BloomConvolutionPreFilterMult;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BloomConvolutionBufferScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* BloomDirtMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BloomDirtMaskIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor BloomDirtMaskTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float LensFlareIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor LensFlareTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float LensFlareBokehSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float LensFlareThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* LensFlareBokehShape;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor LensFlareTints[8];
    
    RSPOSTPROCESSRUNTIME_API FRsBloomSettings();
};

