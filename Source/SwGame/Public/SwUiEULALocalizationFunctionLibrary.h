#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SwUiEULALocalizationFunctionLibrary.generated.h"

class UObject;
class USwEULALocalization;

UCLASS(Blueprintable)
class SWGAME_API USwUiEULALocalizationFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USwUiEULALocalizationFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USwEULALocalization* GetEULALocalization(UObject* WorldContextObject);
    
};

