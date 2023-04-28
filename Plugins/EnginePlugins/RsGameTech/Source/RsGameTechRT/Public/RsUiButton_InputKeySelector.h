#pragma once
#include "CoreMinimal.h"
#include "RsUiButton.h"
#include "RsUiButton_InputKeySelector.generated.h"

UCLASS(Blueprintable)
class URsUiButton_InputKeySelector : public URsUiButton {
    GENERATED_BODY()
public:
    URsUiButton_InputKeySelector();
    UFUNCTION(BlueprintCallable)
    void SetIsSelectingKey(bool bSelecting);
    
};

