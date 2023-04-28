#pragma once
#include "CoreMinimal.h"
#include "SwSpeederBikeSyncID.h"
#include "SwOnSpeederBikeSyncCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FSwOnSpeederBikeSyncCompleteDelegate, const FSwSpeederBikeSyncID&, SyncID);

