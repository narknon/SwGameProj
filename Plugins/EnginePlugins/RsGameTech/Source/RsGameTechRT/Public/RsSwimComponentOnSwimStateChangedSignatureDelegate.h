#pragma once
#include "CoreMinimal.h"
#include "ERsSwimState.h"
#include "RsSwimComponentOnSwimStateChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRsSwimComponentOnSwimStateChangedSignature, ERsSwimState, previousSwimState, ERsSwimState, newSwimState);

