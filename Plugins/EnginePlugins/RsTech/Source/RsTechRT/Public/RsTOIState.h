#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "ERsTOIState.h"
#include "RsTOIState.generated.h"

UCLASS(Blueprintable)
class URsTOIState : public UObject {
    GENERATED_BODY()
public:
    URsTOIState();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWorldSeparationAxis(float T) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTolerance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTOISuccess() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTOIIterations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTOI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeRootCurrent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeRoot2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeRoot1() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTime2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTime1() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetSeparation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsTOIState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSeparationVertex(float T) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSeparationTimeRoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSeparationTime2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSeparationTime1() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRootSolverIterations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocalSeparationAxis() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDeepestPointsIterations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDeepestPointsAxis2(float T);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDeepestPointsAxis1(float T);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDeepestPoint2(float T) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDeepestPoint1(float T) const;
    
};

