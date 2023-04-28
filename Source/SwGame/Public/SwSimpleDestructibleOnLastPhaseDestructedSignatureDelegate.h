#pragma once
#include "CoreMinimal.h"
#include "SwSimpleDestructibleOnLastPhaseDestructedSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSwSimpleDestructibleOnLastPhaseDestructedSignature, AActor*, SwDestructibleActor, bool, DuringInitializationFromSaveGameState, bool, DuringInitializationFromWorldStateSystem);

