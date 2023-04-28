#pragma once
#include "CoreMinimal.h"
#include "Components/ScrollBox.h"
#include "Components/Widget.h"
#include "ERsCurvedScrollBoxItemSpacing.h"
#include "RsCurvedScrollBox.generated.h"

UCLASS(Blueprintable)
class URsCurvedScrollBox : public UScrollBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetFloat CurveRadiusDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsCurvedScrollBoxItemSpacing ItemSpacing;
    
    URsCurvedScrollBox();
    UFUNCTION(BlueprintCallable)
    void SetItemSpacing(ERsCurvedScrollBoxItemSpacing InItemSpacing);
    
    UFUNCTION(BlueprintCallable)
    void SetCurveRadius(float InCurveRadius);
    
};

