#pragma once
#include "CoreMinimal.h"
#include "ERsNavState.h"
#include "RsNavStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FRsNavStateChanged, ERsNavState, NewState, ERsNavState, PrevState);

