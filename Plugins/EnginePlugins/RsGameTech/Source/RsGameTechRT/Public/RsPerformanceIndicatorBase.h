#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RsPerformanceIndicatorVisibilityEventDelegate.h"
#include "RsPerformanceIndicatorBase.generated.h"

UCLASS(Blueprintable)
class URsPerformanceIndicatorBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibleAfterIndicatorTurnsOffDuration;
    
    URsPerformanceIndicatorBase();
    UFUNCTION(BlueprintCallable)
    void SetIndicatorIsOnDelegate(FRsPerformanceIndicatorVisibilityEvent Function);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIndicatorChanged(bool bShouldBeOn) const;
    
};

