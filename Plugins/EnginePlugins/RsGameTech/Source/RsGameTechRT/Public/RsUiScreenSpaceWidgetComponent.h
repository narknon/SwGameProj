#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "ERsUiWidgetPinningMode.h"
#include "EViewportPaddingMode.h"
#include "Templates/SubclassOf.h"
#include "ViewportPaddingPercentage.h"
#include "ViewportPaddingPixels.h"
#include "RsUiScreenSpaceWidgetComponent.generated.h"

class UCurveFloat;
class UUserWidget;

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsUiScreenSpaceWidgetComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ScreenSpaceWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CachedScreenLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CachedPinnedLocationAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseWorldMapHologramProjection;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPinWidgetToViewport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PinWidgetAreaAngle1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PinWidgetAreaAngle2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsUiWidgetPinningMode PinWidgetMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AngleToScreenRemapper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PinWidgetWorldSpaceScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EViewportPaddingMode> PaddingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewportPaddingPixels ViewportPixelPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewportPaddingPercentage ViewportPercentagePadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WidgetZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D WidgetViewportAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsForcedInvisible;
    
public:
    URsUiScreenSpaceWidgetComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateWidgetPinningMode(TEnumAsByte<EViewportPaddingMode> ViewportPaddingMode, FViewportPaddingPixels PixelPadding, FViewportPaddingPercentage PercentagePadding);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnScreen() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceInvisible(bool NewBIsForcedInvisible);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesScreenLocationCollideWithWidget(const FVector2D ScreenPosition);
    
};

