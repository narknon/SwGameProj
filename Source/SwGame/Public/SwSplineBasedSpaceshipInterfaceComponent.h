#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SwSpaceshipCrosshairConstants.h"
#include "SwSpaceshipRotationConstants.h"
#include "SwSpaceshipTranslationConstants.h"
#include "SwVehicleDrivingInterfaceComponent.h"
#include "Templates/SubclassOf.h"
#include "SwSplineBasedSpaceshipInterfaceComponent.generated.h"

class ACameraActor;
class ASwProjectile;
class ASwSplineSpaceshipCamera;
class ASwVehicleSplineActor;
class URsHeroStateModifierDefinition;
class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwSplineBasedSpaceshipInterfaceComponent : public USwVehicleDrivingInterfaceComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASwVehicleSplineActor* SplinePathActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineStartPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseSplineMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlowDownSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSpaceshipTranslationConstants TranslationConstants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSpaceshipRotationConstants RotationConstants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSpaceshipCrosshairConstants CrosshairConstants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputStickDeadzone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* SplineSpaceshipHeroStateModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACameraActor> SplineSpaceshipCameraClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASwSplineSpaceshipCamera* SplineSpaceshipCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASwProjectile> ProjectileType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USplineComponent* SplinePathComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* ProxyCrosshairRotationComponent;
    
public:
    USwSplineBasedSpaceshipInterfaceComponent();
    UFUNCTION(BlueprintCallable)
    void TransferShipToNewSpline(ASwVehicleSplineActor* NewSplinePathActor, bool bInResetToCenterOfSpline);
    
    UFUNCTION(BlueprintCallable)
    float GetVerticalLinearVelocity();
    
    UFUNCTION(BlueprintCallable)
    FVector GetShipLocationSplineSpace();
    
    UFUNCTION(BlueprintCallable)
    float GetHorizontalLinearVelocity();
    
    UFUNCTION(BlueprintCallable)
    FVector GetCurrentSplineTranslation();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentSplineTime();
    
    UFUNCTION(BlueprintCallable)
    FRotator GetCurrentSplineRotation();
    
};

