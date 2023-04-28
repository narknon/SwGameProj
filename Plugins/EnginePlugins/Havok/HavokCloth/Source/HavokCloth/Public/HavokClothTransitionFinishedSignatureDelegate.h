#pragma once
#include "CoreMinimal.h"
#include "HavokClothTransitionFinishedSignatureDelegate.generated.h"

class UHavokClothEntityComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHavokClothTransitionFinishedSignature, UHavokClothEntityComponent*, ClothEntityComponent, int32, ClothIndex);

