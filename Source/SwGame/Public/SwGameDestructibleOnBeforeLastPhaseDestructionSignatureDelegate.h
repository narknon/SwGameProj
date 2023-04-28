#pragma once
#include "CoreMinimal.h"
#include "SwGameDestructibleOnBeforeLastPhaseDestructionSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSwGameDestructibleOnBeforeLastPhaseDestructionSignature, AActor*, SwDestructibleActor, bool, DuringInitializationFromSaveGameState, bool, DuringInitializationFromWorldStateSystem);

