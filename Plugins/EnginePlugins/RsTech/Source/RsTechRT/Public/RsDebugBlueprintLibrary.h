#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERsMessageLogSeverity.h"
#include "RsGJKPrimitive.h"
#include "RsSweep.h"
#include "RsTOIInput.h"
#include "RsDebugBlueprintLibrary.generated.h"

class UObject;
class URsTOIState;

UCLASS(Blueprintable)
class URsDebugBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URsDebugBlueprintLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform SweepToTransform(const FRsSweep sweep, const float T);
    
    UFUNCTION(BlueprintCallable)
    static void StartBlueprintRProfMarker(const FString& Annotation);
    
    UFUNCTION(BlueprintCallable)
    static void ResumableTOI(URsTOIState* State);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MessageLogText(UObject* WorldContextObject, const FString& Text, ERsMessageLogSeverity Severity, FName LogCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URsTOIState* MakeTOIState(const FRsTOIInput Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRsTOIInput MakeTOIInput(const FRsGJKPrimitive& shapeA, const FRsGJKPrimitive& shapeB, const FRsSweep sweepA, const FRsSweep sweepB, const float Interval);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRsSweep MakeSweep(const FVector posInit, const FVector posFinal, const FRotator rotInit, const FRotator rotFinal, const float ALPHA);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRsGJKPrimitive MakeGJKPrimitiveSphere(const float Radius, const FVector Position, const FVector Scale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRsGJKPrimitive MakeGJKPrimitiveCapsule(const float Radius, const float HalfHeight, const FVector Position, const FRotator Rotation, const FVector Scale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRsGJKPrimitive MakeGJKPrimitiveBox(const FVector HalfExtents, const FVector Position, const FRotator Rotation, const FVector Scale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GJKPrimitiveToTransform(const FRsGJKPrimitive prim);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetSweptBoundingBox(FVector& outPos, FVector& outHalfExtents, const FRsSweep sweep, const FRsGJKPrimitive prim);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetFrameNumber();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetFrameCounter();
    
    UFUNCTION(BlueprintCallable)
    static void EndBlueprintRProfMarker();
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugGJKTransform(UObject* Context, const FRsGJKPrimitive shapeA, const FRsGJKPrimitive shapeB, const FTransform txA, const FTransform txB, const float LifeTime, const bool drawShapes, const bool drawFeatures, const bool drawSimplex, const bool adjustRadius);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugGJKPrimitiveTransform(UObject* Context, const FRsGJKPrimitive Shape, const FTransform worldTx, const FLinearColor Color, const float LifeTime);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugGJKPrimitive(UObject* Context, const FRsGJKPrimitive Shape, const FLinearColor Color, const float LifeTime);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugGJK(UObject* Context, const FRsGJKPrimitive shapeA, const FRsGJKPrimitive shapeB, const float LifeTime, const bool drawShapes, const bool drawFeatures, const bool drawSimplex, const bool adjustRadius);
    
    UFUNCTION(BlueprintCallable)
    static void CalculateTOI(bool& Success, float& Time, const FRsTOIInput Input);
    
};

