#pragma once
#include "CoreMinimal.h"
#include "MountingDelegateDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMountingDelegate, APawn*, MountPawn);

