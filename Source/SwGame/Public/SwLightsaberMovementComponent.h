#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/MovementComponent.h"
#include "RsHitEvent.h"
#include "SwBitfield_TargetRotatorMask.h"
#include "SwLightSaberStartCatchDelegate.h"
#include "SwLightSaberThrowReturnedDelegate.h"
#include "SwLightsaberMovementComponent.generated.h"

class AActor;
class UPrimitiveComponent;
class URsDamageType;

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwLightsaberMovementComponent : public UMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwLightSaberThrowReturned OnThrowReturned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwLightSaberStartCatch OnStartCatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator TargetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwBitfield_TargetRotatorMask TargetRotationMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetRotationAlfaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PivotTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRotationInLocalSpace: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReturnToThrower: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bThrowFixedDistance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CatchDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultThrowDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArcAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HomingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsHitEvent HitEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsDamageType* DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitDebounceTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsFlyingBack;
    
    USwLightsaberMovementComponent();
    UFUNCTION(BlueprintCallable)
    void ThrowWithDuration(float InTimeToDestination);
    
    UFUNCTION(BlueprintCallable)
    void ThrowAtSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetCollision(bool EnableCollision);
    
    UFUNCTION(BlueprintCallable)
    void ReturnWithDuration(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void ReturnAtSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void OnAfterCatch();
    
    UFUNCTION(BlueprintCallable)
    void InitSaberMovement(AActor* SaberOwner, UPrimitiveComponent* Collision, FName AttackType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBroadcastedCatch() const;
    
    UFUNCTION(BlueprintCallable)
    void FlyToWithDuration(AActor* InHomingTarget, const FVector& InTargetLocation, float InTimeToDestination, bool ReturnToThrower);
    
    UFUNCTION(BlueprintCallable)
    void FlyToAtSpeed(AActor* InHomingTarget, const FVector& InTargetLocation, float Speed, bool ReturnToThrower);
    
};

