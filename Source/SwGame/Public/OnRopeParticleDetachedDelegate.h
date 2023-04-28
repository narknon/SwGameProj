#pragma once
#include "CoreMinimal.h"
#include "OnRopeParticleDetachedDelegate.generated.h"

class ASwPinnedRopeActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRopeParticleDetached, ASwPinnedRopeActor*, PinnedRope, const int32, RopeParticle);

