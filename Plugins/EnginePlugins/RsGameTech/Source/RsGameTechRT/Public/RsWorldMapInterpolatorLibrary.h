#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RsWorldMapInterpolationData_FVector.h"
#include "RsWorldMapInterpolationData_float.h"
#include "RsWorldMapInterpolatorLibrary.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class URsWorldMapInterpolatorLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URsWorldMapInterpolatorLibrary();
    UFUNCTION(BlueprintCallable)
    static FRsWorldMapInterpolationData_FVector MakeInterpolationData_FVector(FVector Start, FVector End, UCurveFloat* InterpolationCurve);
    
    UFUNCTION(BlueprintCallable)
    static FRsWorldMapInterpolationData_float MakeInterpolationData_float(float Start, float End, UCurveFloat* InterpolationCurve);
    
    UFUNCTION(BlueprintCallable)
    static FRsWorldMapInterpolationData_FVector Interpolate_FVector(const FRsWorldMapInterpolationData_FVector& InterpolationData, float InterpolationValue);
    
    UFUNCTION(BlueprintCallable)
    static FRsWorldMapInterpolationData_float Interpolate_float(const FRsWorldMapInterpolationData_float& InterpolationData, float InterpolationValue);
    
    UFUNCTION(BlueprintCallable)
    static FRsWorldMapInterpolationData_FVector EndInterpolate_FVector(const FRsWorldMapInterpolationData_FVector& InterpolationData);
    
    UFUNCTION(BlueprintCallable)
    static FRsWorldMapInterpolationData_float EndInterpolate_float(const FRsWorldMapInterpolationData_float& InterpolationData);
    
};

