#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "RsHitEvent.h"
#include "RsHitColliderEventDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRsHitColliderEvent, const FHitResult&, Hit, const FRsHitEvent&, HitEvent, const UPrimitiveComponent*, HitCollider);

