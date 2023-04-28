#pragma once
#include "CoreMinimal.h"
#include "OnActorAttachToZiplinePointDelegate.generated.h"

class AActor;
class URsZiplinePointComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActorAttachToZiplinePoint, AActor*, AttachActor, URsZiplinePointComponent*, ZiplinePoint);

