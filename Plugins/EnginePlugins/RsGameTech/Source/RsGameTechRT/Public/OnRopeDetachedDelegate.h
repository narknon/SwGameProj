#pragma once
#include "CoreMinimal.h"
#include "OnRopeDetachedDelegate.generated.h"

class URsRopeAttachmentComponent;
class URsRopeComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRopeDetached, URsRopeComponent*, Rope, URsRopeAttachmentComponent*, RopeAttachment);

