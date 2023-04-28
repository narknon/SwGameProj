#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RsDevNetBlueprintLibrary.generated.h"

UCLASS(Abstract, Blueprintable)
class URsDevNetBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URsDevNetBlueprintLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool RequestScreenshot(const FString& Description);
    
};

