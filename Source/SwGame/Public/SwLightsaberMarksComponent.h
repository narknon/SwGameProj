#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RsDamageParams.h"
#include "SwLightsaberMarksComponent.generated.h"

class AActor;
class UAkAudioEvent;
class UAkComponent;
class UDataTable;
class UDecalTrailComponent;
class UParticleSystemComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwLightsaberMarksComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalTrailComponent* TrailTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SurfaceTypeTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ActorInfoTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioStartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioStopEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AudioComponent;
    
public:
    USwLightsaberMarksComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TracingActive() const;
    
    UFUNCTION(BlueprintCallable)
    void StopTracingSyncKill();
    
    UFUNCTION(BlueprintCallable)
    void StopTracing();
    
    UFUNCTION(BlueprintCallable)
    void StartTracingSyncKill();
    
    UFUNCTION(BlueprintCallable)
    void StartTracing();
    
private:
    UFUNCTION(BlueprintCallable)
    void OwnerInstigatedAnyDamage(float Damage, const FRsDamageParams& DamageInfo, AActor* DamagedActor, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnParticleSystemFinished(UParticleSystemComponent* FinishedComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    void ForceStopMarksAudio();
    
};

