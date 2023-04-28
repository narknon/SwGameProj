#pragma once
#include "CoreMinimal.h"
#include "SwQuicksandOnStartAffectingActorSignatureDelegate.generated.h"

class AActor;
class ASwQuicksandActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwQuicksandOnStartAffectingActorSignature, ASwQuicksandActor*, SwQuicksandActor, AActor*, actorInQuicksand);

