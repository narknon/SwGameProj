#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERsQuadrant.h"
#include "RsGameplayMathStatics.generated.h"

class AActor;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class URsGameplayMathStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URsGameplayMathStatics();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float UnwindRadians(float RadianAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float UnwindDegrees(float DegreeAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void SelectRandomVectorFromArray(const TArray<FVector>& Array, FVector& OutVector, int32& SelectedIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool RaycastSkeletalMeshPerPoly(USkeletalMeshComponent* SkeletalMeshComp, FVector Start, FVector End, FVector& OutHitLocation, int32& OutSkinVertsEvaluated, int32& OutTriangleTestsPerformed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float RandomSign();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float RandomFloatAroundBaseValue(float BaseValue, float MaxNegativeDifference, float MaxPositiveDifference);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ProjectDirectionOnHorizontal(const FVector Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRelativeHeadingAngleToLocation(AActor* BaseActor, const FVector& TargetLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRelativeHeadingAngleToActor(AActor* BaseActor, AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetDecalNormalFromHit(const AActor* MovingActor, FVector ImpactPoint, FVector ImpactNormal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ERsQuadrant GetActorRelativeQuadrant(const AActor* SelfActor, const AActor* TargetActor, float CenterRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector CalculateStaggeringShotVector(FVector Direction, float MinAngle, float MaxAngle, FVector Axis);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ApproximateTrackingShotVector(FVector ProjectilePosition, float ProjectileSpeed, FVector TargetPosition, FVector TargetVelocity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ActorRelativeVectorToWorldVector(const AActor* Actor, FVector LocalVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ActorRelativeVectorToWorldDirection(const AActor* Actor, FVector Vector);
    
};

