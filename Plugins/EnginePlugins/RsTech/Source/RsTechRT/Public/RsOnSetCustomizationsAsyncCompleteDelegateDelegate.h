#pragma once
#include "CoreMinimal.h"
#include "RsOnSetCustomizationsAsyncCompleteDelegateDelegate.generated.h"

class URsActorSkeletalMeshComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FRsOnSetCustomizationsAsyncCompleteDelegate, URsActorSkeletalMeshComponent*, MeshComponent);

