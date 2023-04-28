#pragma once
#include "CoreMinimal.h"
#include "OnRopeAttachedAirBeginDelegate.generated.h"

class URsRopeAttachmentComponent;
class URsRopeComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRopeAttachedAirBegin, URsRopeComponent*, Rope, URsRopeAttachmentComponent*, RopeAttachment);

