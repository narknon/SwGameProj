#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ESwForceInteractWidgetRevealMode.h"
#include "ESwForceTargetHighlightType.h"
#include "SwForceInteractTargetWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SWGAME_API USwForceInteractTargetWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USwForceInteractTargetWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartInteract(ESwForceInteractWidgetRevealMode InRevealMode, ESwForceTargetHighlightType InForceTargetHighlightType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHighlightChanged(ESwForceTargetHighlightType InForceTargetHighlightType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndInteract();
    
};

