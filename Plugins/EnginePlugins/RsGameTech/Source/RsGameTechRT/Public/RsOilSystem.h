#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "RsChemistryObjectHandle.h"
#include "RsOilSystem.generated.h"

class ARsOilMeshRenderingActor;
class URsChemistryFlammableSettings;
class URsOilBlueprintEffectHandler;

UCLASS(Blueprintable)
class URsOilSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsChemistryFlammableSettings* OilFlammableSettings_Igniteable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsChemistryFlammableSettings* OilFlammableSettings_ActivePropagator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsChemistryFlammableSettings* OilFlammableSettings_Inert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARsOilMeshRenderingActor* OilRenderingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsOilBlueprintEffectHandler* BlueprintEffectHandler;
    
public:
    URsOilSystem();
private:
    UFUNCTION(BlueprintCallable)
    void HandleOilParticleIgnited(FRsChemistryObjectHandle FlammableObject, FVector IgnitionPoint);
    
    UFUNCTION(BlueprintCallable)
    void HandleOilParticleExtinguished(FRsChemistryObjectHandle FlammableObject);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOilParticleTransform(FTransform& ParticleTransform, int32 ParticleID) const;
    
    UFUNCTION(BlueprintCallable)
    void GetNearbyActiveOilParticles(TArray<int32>& ParticleIds, FVector SearchLocation, float SearchRadius, bool bDrawDebug);
    
    UFUNCTION(BlueprintCallable)
    bool DeactivateOilParticleById(int32 ParticleID);
    
    UFUNCTION(BlueprintCallable)
    void CreateOilPatch(FVector Location, FVector Direction);
    
    UFUNCTION(BlueprintCallable)
    void CreateOilFailureEffects(FVector Location, FVector HitNormal);
    
    UFUNCTION(BlueprintCallable)
    void ClearOil();
    
};

