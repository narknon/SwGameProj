#pragma once
#include "CoreMinimal.h"
#include "ERsNavState.h"
#include "RsNavStateChangedMulticastDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRsNavStateChangedMulticast, ERsNavState, NewState, ERsNavState, PrevState);

