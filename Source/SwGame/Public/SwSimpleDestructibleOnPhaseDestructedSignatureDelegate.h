#pragma once
#include "CoreMinimal.h"
#include "SwSimpleDestructibleOnPhaseDestructedSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSwSimpleDestructibleOnPhaseDestructedSignature, AActor*, SwDestructibleActor, int32, PhaseIndex, bool, DuringInitializationFromSaveGameState, bool, DuringInitializationFromWorldStateSystem);

