#pragma once
#include "CoreMinimal.h"
#include "ButtonMashType.h"
#include "ButtonMashDurationAnimNotify.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SWGAME_API UButtonMashDurationAnimNotify : public UButtonMashType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NotifyIdentifier;
    
    UButtonMashDurationAnimNotify();
};

