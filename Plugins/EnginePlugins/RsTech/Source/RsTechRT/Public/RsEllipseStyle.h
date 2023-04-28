#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateWidgetStyle.h"
#include "RsEllipseStyle.generated.h"

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsEllipseStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush FillImage;
    
    FRsEllipseStyle();
};

