#include "RsGameplayMathStatics.h"

float URsGameplayMathStatics::UnwindRadians(float RadianAngle) {
    return 0.0f;
}

float URsGameplayMathStatics::UnwindDegrees(float DegreeAngle) {
    return 0.0f;
}

void URsGameplayMathStatics::SelectRandomVectorFromArray(const TArray<FVector>& Array, FVector& OutVector, int32& SelectedIndex) {
}

bool URsGameplayMathStatics::RaycastSkeletalMeshPerPoly(USkeletalMeshComponent* SkeletalMeshComp, FVector Start, FVector End, FVector& OutHitLocation, int32& OutSkinVertsEvaluated, int32& OutTriangleTestsPerformed) {
    return false;
}

float URsGameplayMathStatics::RandomSign() {
    return 0.0f;
}

float URsGameplayMathStatics::RandomFloatAroundBaseValue(float BaseValue, float MaxNegativeDifference, float MaxPositiveDifference) {
    return 0.0f;
}

FVector URsGameplayMathStatics::ProjectDirectionOnHorizontal(const FVector Direction) {
    return FVector{};
}

float URsGameplayMathStatics::GetRelativeHeadingAngleToLocation(AActor* BaseActor, const FVector& TargetLocation) {
    return 0.0f;
}

float URsGameplayMathStatics::GetRelativeHeadingAngleToActor(AActor* BaseActor, AActor* TargetActor) {
    return 0.0f;
}

FVector URsGameplayMathStatics::GetDecalNormalFromHit(const AActor* MovingActor, FVector ImpactPoint, FVector ImpactNormal) {
    return FVector{};
}

ERsQuadrant URsGameplayMathStatics::GetActorRelativeQuadrant(const AActor* SelfActor, const AActor* TargetActor, float CenterRadius) {
    return ERsQuadrant::Center;
}

FVector URsGameplayMathStatics::CalculateStaggeringShotVector(FVector Direction, float MinAngle, float MaxAngle, FVector Axis) {
    return FVector{};
}

FVector URsGameplayMathStatics::ApproximateTrackingShotVector(FVector ProjectilePosition, float ProjectileSpeed, FVector TargetPosition, FVector TargetVelocity) {
    return FVector{};
}

FVector URsGameplayMathStatics::ActorRelativeVectorToWorldVector(const AActor* Actor, FVector LocalVector) {
    return FVector{};
}

FVector URsGameplayMathStatics::ActorRelativeVectorToWorldDirection(const AActor* Actor, FVector Vector) {
    return FVector{};
}

URsGameplayMathStatics::URsGameplayMathStatics() {
    // Null default object.
}

