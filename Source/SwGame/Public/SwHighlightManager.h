#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "ESwForceInteractWidgetRevealMode.h"
#include "ESwForceTargetHighlightType.h"
#include "ESwHighlightType.h"
#include "SwHighlightBlendData.h"
#include "SwHighlightHandle.h"
#include "SwHighlightManager.generated.h"

class AActor;
class UCurveFloat;
class UMaterialInstanceDynamic;
class URsPostProcessSettingsDefinition;

UCLASS(Blueprintable)
class USwHighlightManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwForceInteractWidgetRevealMode ForceInteractWidgetRevealMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsPostProcessSettingsDefinition* PostProcessSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DynamicHighlightMaterial;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwHighlightBlendData BlendData[10];
    
    USwHighlightManager();
    UFUNCTION(BlueprintCallable)
    void UpdateCustomColors();
    
    UFUNCTION(BlueprintCallable)
    void SetHighlightBlendCurve(const AActor* InBlendActor, ESwHighlightType InHighlightType, UCurveFloat* InBlendCurve, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void SetForceTargetHighlightType(ESwForceTargetHighlightType InHighlightType);
    
    UFUNCTION(BlueprintCallable)
    void SetForceTargetHighlightData(FMatrix InToWorld, FVector InExtents);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHighlightEnabled(const AActor* InActor, ESwHighlightType InHighlightType) const;
    
    UFUNCTION(BlueprintCallable)
    void EnableModifiedForceTargetHighlightIntensity(float InIntensity);
    
    UFUNCTION(BlueprintCallable)
    FSwHighlightHandle EnableHighlight(const AActor* InActor, ESwHighlightType InHighlightType);
    
    UFUNCTION(BlueprintCallable)
    FSwHighlightHandle EnableForceTargetHighlight(const AActor* InActor, ESwHighlightType InHighlightType, ESwForceTargetHighlightType InForceTargetHighlightType);
    
    UFUNCTION(BlueprintCallable)
    void DisableModifiedForceTargetHighlightIntensity();
    
    UFUNCTION(BlueprintCallable)
    void DisableHighlightByHandle(FSwHighlightHandle InHandle);
    
    UFUNCTION(BlueprintCallable)
    void DisableHighlight(const AActor* InActor, ESwHighlightType InHighlightType);
    
};

