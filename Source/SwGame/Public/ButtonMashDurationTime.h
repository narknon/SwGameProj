#pragma once
#include "CoreMinimal.h"
#include "ButtonMashType.h"
#include "ButtonMashDurationTime.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SWGAME_API UButtonMashDurationTime : public UButtonMashType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UButtonMashDurationTime();
};

