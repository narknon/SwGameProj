#pragma once
#include "CoreMinimal.h"
#include "ECustomizationSlot.h"
#include "PreExistingCustomizationComponent.generated.h"

USTRUCT(BlueprintType)
struct FPreExistingCustomizationComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECustomizationSlot::Type> Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PreExistingComponentName;
    
    RSTECHRT_API FPreExistingCustomizationComponent();
};

