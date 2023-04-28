#pragma once
#include "CoreMinimal.h"
#include "SwGameDestructibleOnBeforePhaseDestructionSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSwGameDestructibleOnBeforePhaseDestructionSignature, AActor*, SwDestructibleActor, int32, PhaseIndex, bool, DuringInitializationFromSaveGameState, bool, DuringInitializationFromWorldStateSystem);

