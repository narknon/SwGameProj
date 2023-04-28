#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NarrativeEvent.h"
#include "NarrativeEventResult.h"
#include "RsNarrativeBlueprintLibrary.generated.h"

class UObject;
class URsCIGSystem;
class URsNarrativeSystem;

UCLASS(Blueprintable)
class URsNarrativeBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URsNarrativeBlueprintLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FNarrativeEventResult NarrativeEvent(UObject* WorldContextObject, FNarrativeEvent Details);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static URsNarrativeSystem* GetRsNarrativeSystem(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static URsCIGSystem* GetRsCIGSystem(UObject* WorldContextObject);
    
};

