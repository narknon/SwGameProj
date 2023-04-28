#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "OilIgnitionAudioInfo.h"
#include "RsOilBlueprintEffectHandler.generated.h"

class AActor;
class USceneComponent;

UCLASS(Blueprintable)
class URsOilBlueprintEffectHandler : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* OilImpactAudioActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* OilCrackAudioActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* OilBurnAudioActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* OilIgnitionAudioActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* OilDisintegrateAudioActor;
    
    URsOilBlueprintEffectHandler();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldSpawnFlameEffectsAttached(USceneComponent* ParentComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOUpdateOilIgnitionTimers(const float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOilSpawnFailed(FTransform Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOilQuadIgnited(int32 QuadId, FTransform QuadTransform, USceneComponent* ParentComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOilQuadBurnedOut(int32 QuadId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOilParticleSpawned(int32 ParticleID, FTransform ParticleTransform, USceneComponent* ParentComponent, bool bEdgeParticle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOilParticleIgnited(int32 ParticleID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOilParticleDestroyed(int32 ParticleID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOilParticleBurnedOut(int32 ParticleID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOilParticleBecomeInert(int32 ParticleID);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsDebugEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool CheckOilAudioDataValidity(FOilIgnitionAudioInfo Info);
    
};

