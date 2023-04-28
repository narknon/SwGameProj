#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "RsUiUserWidget.generated.h"

class URsUIScalingSequencePlayer;
class UWidgetAnimation;

UCLASS(Blueprintable)
class URsUiUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bScalingAnimationApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CachedScalingWidgetAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsUIScalingSequencePlayer* ScalingSequencePlayer;
    
public:
    URsUiUserWidget();
    UFUNCTION(BlueprintCallable)
    void HandleOnVisibilityChanged(ESlateVisibility InVisibility);
    
};

