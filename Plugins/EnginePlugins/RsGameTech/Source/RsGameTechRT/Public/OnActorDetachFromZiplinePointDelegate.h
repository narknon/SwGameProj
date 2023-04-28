#pragma once
#include "CoreMinimal.h"
#include "OnActorDetachFromZiplinePointDelegate.generated.h"

class AActor;
class URsZiplinePointComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActorDetachFromZiplinePoint, AActor*, AttachActor, URsZiplinePointComponent*, ZiplinePoint);

