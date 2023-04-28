#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RsDesignableUserWidget.generated.h"

UCLASS(Blueprintable)
class URsDesignableUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    URsDesignableUserWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSynchronizeProperties();
    
};

