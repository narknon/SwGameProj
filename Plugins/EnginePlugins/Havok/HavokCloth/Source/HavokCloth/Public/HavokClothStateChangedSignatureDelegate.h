#pragma once
#include "CoreMinimal.h"
#include "HavokClothStateChangedSignatureDelegate.generated.h"

class UHavokClothEntityComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FHavokClothStateChangedSignature, UHavokClothEntityComponent*, ClothEntityComponent, int32, ClothIndex, int32, NewState);

