#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RsContinuousInterpolatorFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class URsContinuousInterpolatorFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URsContinuousInterpolatorFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector RsContinuousInterpVector(const FVector CurrentValue, const FVector TargetValue, const float DeltaTime, const float SmoothTime, const float SmoothTimeInterpPercentage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator RsContinuousInterpRotator(const FRotator CurrentValue, const FRotator TargetValue, const float DeltaTime, const float SmoothTime, const float SmoothTimeInterpPercentage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float RsContinuousInterpFloat(const float CurrentValue, const float TargetValue, const float DeltaTime, const float SmoothTime, const float SmoothTimeInterpPercentage);
    
};

