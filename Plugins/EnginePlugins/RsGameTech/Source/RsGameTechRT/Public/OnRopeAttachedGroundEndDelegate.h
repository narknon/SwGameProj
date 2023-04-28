#pragma once
#include "CoreMinimal.h"
#include "OnRopeAttachedGroundEndDelegate.generated.h"

class URsRopeAttachmentComponent;
class URsRopeComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRopeAttachedGroundEnd, URsRopeComponent*, Rope, URsRopeAttachmentComponent*, RopeAttachment);

