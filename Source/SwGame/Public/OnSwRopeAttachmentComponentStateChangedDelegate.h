#pragma once
#include "CoreMinimal.h"
#include "ESwRopeAttachmentState.h"
#include "OnSwRopeAttachmentComponentStateChangedDelegate.generated.h"

class USwRopeAttachmentComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSwRopeAttachmentComponentStateChanged, USwRopeAttachmentComponent*, RopeAttachment, const ESwRopeAttachmentState, OldState, const ESwRopeAttachmentState, NewState);

