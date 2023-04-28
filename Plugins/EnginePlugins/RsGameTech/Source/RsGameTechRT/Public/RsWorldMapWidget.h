#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ERsWorldMapRumorVisibilityState.h"
#include "RsWorldMapWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class URsWorldMapWidget : public UUserWidget {
    GENERATED_BODY()
public:
    URsWorldMapWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetToHidden();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetWidgetTexture(UTexture2D* InTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetRumorVisibilityState(ERsWorldMapRumorVisibilityState InOldState, ERsWorldMapRumorVisibilityState InNewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetIconVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializeWidget();
    
};

