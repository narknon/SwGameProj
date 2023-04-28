#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RsChemistryObjectHandle.h"
#include "RsChemistryBlueprintFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class URsChemistryBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URsChemistryBlueprintFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualChemistryObjectHandle(const FRsChemistryObjectHandle& ObjectHandleA, const FRsChemistryObjectHandle& ObjectHandleB);
    
};

