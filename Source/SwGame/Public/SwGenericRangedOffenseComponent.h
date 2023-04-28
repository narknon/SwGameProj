#pragma once
#include "CoreMinimal.h"
#include "SwProjectileOverrideInfo.h"
#include "SwRangedOffenseBaseComponent.h"
#include "SwGenericRangedOffenseComponent.generated.h"

class UAnimMontage;
class USwMuzzleTransformComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwGenericRangedOffenseComponent : public USwRangedOffenseBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwProjectileOverrideInfo PrimaryProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwProjectileOverrideInfo AlternateProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverrideLowerWeaponSectionName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USwMuzzleTransformComponent* MuzzleTransform;
    
public:
    USwGenericRangedOffenseComponent();
private:
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
};

