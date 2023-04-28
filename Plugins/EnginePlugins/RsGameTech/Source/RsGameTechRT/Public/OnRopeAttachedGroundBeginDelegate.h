#pragma once
#include "CoreMinimal.h"
#include "OnRopeAttachedGroundBeginDelegate.generated.h"

class URsRopeAttachmentComponent;
class URsRopeComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRopeAttachedGroundBegin, URsRopeComponent*, Rope, URsRopeAttachmentComponent*, RopeAttachment);

