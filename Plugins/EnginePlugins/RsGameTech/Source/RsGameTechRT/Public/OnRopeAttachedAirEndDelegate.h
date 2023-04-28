#pragma once
#include "CoreMinimal.h"
#include "OnRopeAttachedAirEndDelegate.generated.h"

class URsRopeAttachmentComponent;
class URsRopeComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRopeAttachedAirEnd, URsRopeComponent*, Rope, URsRopeAttachmentComponent*, RopeAttachment);

