#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RsAudioPortalLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class URsAudioPortalLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URsAudioPortalLibrary();
    UFUNCTION(BlueprintCallable)
    static void GeneratePortalDoorUniqueId(AActor* Door);
    
};

