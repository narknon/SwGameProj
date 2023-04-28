#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RsOptionalTransform.h"
#include "RsOptionalTypeLibrary.generated.h"

UCLASS(Blueprintable)
class URsOptionalTypeLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URsOptionalTypeLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRsOptionalTransform Conv_TransformToRsOptionalTransform(const FTransform& Transform);
    
};

