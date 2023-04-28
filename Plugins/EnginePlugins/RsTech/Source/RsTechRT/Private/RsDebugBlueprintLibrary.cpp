#include "RsDebugBlueprintLibrary.h"

FTransform URsDebugBlueprintLibrary::SweepToTransform(const FRsSweep sweep, const float T) {
    return FTransform{};
}

void URsDebugBlueprintLibrary::StartBlueprintRProfMarker(const FString& Annotation) {
}

void URsDebugBlueprintLibrary::ResumableTOI(URsTOIState* State) {
}

void URsDebugBlueprintLibrary::MessageLogText(UObject* WorldContextObject, const FString& Text, ERsMessageLogSeverity Severity, FName LogCategory) {
}

URsTOIState* URsDebugBlueprintLibrary::MakeTOIState(const FRsTOIInput Input) {
    return NULL;
}

FRsTOIInput URsDebugBlueprintLibrary::MakeTOIInput(const FRsGJKPrimitive& shapeA, const FRsGJKPrimitive& shapeB, const FRsSweep sweepA, const FRsSweep sweepB, const float Interval) {
    return FRsTOIInput{};
}

FRsSweep URsDebugBlueprintLibrary::MakeSweep(const FVector posInit, const FVector posFinal, const FRotator rotInit, const FRotator rotFinal, const float ALPHA) {
    return FRsSweep{};
}

FRsGJKPrimitive URsDebugBlueprintLibrary::MakeGJKPrimitiveSphere(const float Radius, const FVector Position, const FVector Scale) {
    return FRsGJKPrimitive{};
}

FRsGJKPrimitive URsDebugBlueprintLibrary::MakeGJKPrimitiveCapsule(const float Radius, const float HalfHeight, const FVector Position, const FRotator Rotation, const FVector Scale) {
    return FRsGJKPrimitive{};
}

FRsGJKPrimitive URsDebugBlueprintLibrary::MakeGJKPrimitiveBox(const FVector HalfExtents, const FVector Position, const FRotator Rotation, const FVector Scale) {
    return FRsGJKPrimitive{};
}

FTransform URsDebugBlueprintLibrary::GJKPrimitiveToTransform(const FRsGJKPrimitive prim) {
    return FTransform{};
}

void URsDebugBlueprintLibrary::GetSweptBoundingBox(FVector& outPos, FVector& outHalfExtents, const FRsSweep sweep, const FRsGJKPrimitive prim) {
}

int32 URsDebugBlueprintLibrary::GetFrameNumber() {
    return 0;
}

int32 URsDebugBlueprintLibrary::GetFrameCounter() {
    return 0;
}

void URsDebugBlueprintLibrary::EndBlueprintRProfMarker() {
}

void URsDebugBlueprintLibrary::DrawDebugGJKTransform(UObject* Context, const FRsGJKPrimitive shapeA, const FRsGJKPrimitive shapeB, const FTransform txA, const FTransform txB, const float LifeTime, const bool drawShapes, const bool drawFeatures, const bool drawSimplex, const bool adjustRadius) {
}

void URsDebugBlueprintLibrary::DrawDebugGJKPrimitiveTransform(UObject* Context, const FRsGJKPrimitive Shape, const FTransform worldTx, const FLinearColor Color, const float LifeTime) {
}

void URsDebugBlueprintLibrary::DrawDebugGJKPrimitive(UObject* Context, const FRsGJKPrimitive Shape, const FLinearColor Color, const float LifeTime) {
}

void URsDebugBlueprintLibrary::DrawDebugGJK(UObject* Context, const FRsGJKPrimitive shapeA, const FRsGJKPrimitive shapeB, const float LifeTime, const bool drawShapes, const bool drawFeatures, const bool drawSimplex, const bool adjustRadius) {
}

void URsDebugBlueprintLibrary::CalculateTOI(bool& Success, float& Time, const FRsTOIInput Input) {
}

URsDebugBlueprintLibrary::URsDebugBlueprintLibrary() {
    // Null default object.
}

