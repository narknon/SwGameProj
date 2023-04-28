#pragma once
#include "CoreMinimal.h"
#include "FRsPhysicalAnimationBlendingCustomController.h"
#include "BlendingCustomControllerFactorChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBlendingCustomControllerFactorChangedSignature, FRsPhysicalAnimationBlendingCustomController, blendingCustomController, float, previousBlendValue, float, newBlendValue);

