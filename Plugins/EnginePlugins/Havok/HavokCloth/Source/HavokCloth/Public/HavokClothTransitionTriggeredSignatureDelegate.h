#pragma once
#include "CoreMinimal.h"
#include "HavokClothTransitionTriggeredSignatureDelegate.generated.h"

class UHavokClothEntityComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FHavokClothTransitionTriggeredSignature, UHavokClothEntityComponent*, ClothEntityComponent, int32, ClothIndex, int32, newTransition);

