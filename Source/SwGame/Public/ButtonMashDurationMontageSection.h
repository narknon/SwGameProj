#pragma once
#include "CoreMinimal.h"
#include "ButtonMashType.h"
#include "ButtonMashDurationMontageSection.generated.h"

class UAnimMontage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SWGAME_API UButtonMashDurationMontageSection : public UButtonMashType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MontageSection;
    
    UButtonMashDurationMontageSection();
};

