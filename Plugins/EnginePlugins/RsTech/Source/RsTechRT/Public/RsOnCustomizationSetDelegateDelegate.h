#pragma once
#include "CoreMinimal.h"
#include "ECustomizationSlot.h"
#include "RsOnCustomizationSetDelegateDelegate.generated.h"

class URsActorSkeletalMeshComponent;
class USkeletalMeshComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRsOnCustomizationSetDelegate, URsActorSkeletalMeshComponent*, MeshComponent, USkeletalMeshComponent*, CustomizationPiece, TEnumAsByte<ECustomizationSlot::Type>, CustomizationSlot);

