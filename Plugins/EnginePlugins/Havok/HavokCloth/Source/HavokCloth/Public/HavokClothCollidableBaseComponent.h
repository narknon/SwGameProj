#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "HavokClothCollidableBaseComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHavokClothCollidableBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutomaticallyUpdateTranformAndVelocity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCollidablePinchDetectionEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollidablePinchDetectionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CollidablePinchDetectionPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCollidableVirtualCollisionPointCollisionEnabled: 1;
    
    UHavokClothCollidableBaseComponent();
    UFUNCTION(BlueprintCallable)
    void SetVirtualCollisionPointCollisionEnabled(bool bVirtualCollisionEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetPinchDetectionRadius(float PinchDetectionRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetPinchDetectionPriority(uint8 PinchDetectionPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetPinchDetectionEnabled(bool bPinchDetectionEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCollidableTransform(const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    void SetCollidableLinearVelocity(const FVector& LinearVelocity);
    
    UFUNCTION(BlueprintCallable)
    void SetCollidableEnabled(bool bInEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCollidableAngularVelocityInRadians(const FVector& AngularVelocity);
    
    UFUNCTION(BlueprintCallable)
    void SetCollidableAngularVelocityInDegrees(const FVector& AngularVelocity);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoUpdate(bool bUpdateFromOwner);
    
    UFUNCTION(BlueprintCallable)
    void ImplicitSetTransform(const FTransform& GoalTransform, const FTransform& PreviousTransform, bool Normalize);
    
    UFUNCTION(BlueprintCallable)
    void ImplicitSetTranformAndVelocities(const FTransform& GoalTransform, const FVector& GoalVelocity, const FVector& GoalAngularVelocity);
    
};

