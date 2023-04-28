#pragma once
#include "CoreMinimal.h"
#include "RsMotionParmChangedEventDelegate.generated.h"

class URsActorMotion;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRsMotionParmChangedEvent, URsActorMotion*, MotionComponent, FName, MotionParm);

