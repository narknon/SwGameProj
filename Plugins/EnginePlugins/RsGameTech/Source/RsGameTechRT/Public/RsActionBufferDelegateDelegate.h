#pragma once
#include "CoreMinimal.h"
#include "RsActionBufferDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FRsActionBufferDelegate, FName, ActionName, bool, bIsBufferedRelease);

