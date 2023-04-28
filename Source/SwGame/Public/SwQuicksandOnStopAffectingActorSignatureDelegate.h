#pragma once
#include "CoreMinimal.h"
#include "SwQuicksandOnStopAffectingActorSignatureDelegate.generated.h"

class AActor;
class ASwQuicksandActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwQuicksandOnStopAffectingActorSignature, ASwQuicksandActor*, SwQuicksandActor, AActor*, actorInQuicksand);

