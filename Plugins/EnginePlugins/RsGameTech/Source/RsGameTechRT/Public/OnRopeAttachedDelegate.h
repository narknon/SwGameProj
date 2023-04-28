#pragma once
#include "CoreMinimal.h"
#include "OnRopeAttachedDelegate.generated.h"

class URsRopeAttachmentComponent;
class URsRopeComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRopeAttached, URsRopeComponent*, Rope, URsRopeAttachmentComponent*, RopeAttachment);

