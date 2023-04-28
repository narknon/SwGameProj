#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SwProceduralMeshComponentLibrary.generated.h"

class UProceduralMeshComponent;

UCLASS(Blueprintable)
class SWGAME_API USwProceduralMeshComponentLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USwProceduralMeshComponentLibrary();
    UFUNCTION(BlueprintCallable)
    static void CopyProceduralMeshComponent(const UProceduralMeshComponent* InProcMeshComponent, const UProceduralMeshComponent* OutProcMeshComponentToCopyTo);
    
};

