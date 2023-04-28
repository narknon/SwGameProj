#pragma once
#include "CoreMinimal.h"
#include "ESwCharacterNavToEndReason.h"
#include "OnSwCharacterNavToEndDelegate.generated.h"

class USwCharacterNavToComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnSwCharacterNavToEnd, USwCharacterNavToComponent*, NavToComponent, const bool, bSuccessful, const ESwCharacterNavToEndReason, Reason);

