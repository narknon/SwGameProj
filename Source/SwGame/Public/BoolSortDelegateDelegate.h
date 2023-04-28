#pragma once
#include "CoreMinimal.h"
#include "BoolSortDelegateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(bool, FBoolSortDelegate, UObject*, LHS, UObject*, RHS);

