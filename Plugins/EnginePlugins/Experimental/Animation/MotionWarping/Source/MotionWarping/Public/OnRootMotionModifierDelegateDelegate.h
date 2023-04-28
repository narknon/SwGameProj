#pragma once
#include "CoreMinimal.h"
#include "OnRootMotionModifierDelegateDelegate.generated.h"

class UMotionWarpingComponent;
class URootMotionModifier;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRootMotionModifierDelegate, UMotionWarpingComponent*, MotionWarpingComp, URootMotionModifier*, RootMotionModifier);

