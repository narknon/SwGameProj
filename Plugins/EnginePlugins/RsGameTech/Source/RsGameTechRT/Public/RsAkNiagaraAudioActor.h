#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ENiagaraAudioActorActivationMode.h"
#include "RsAkNiagaraAudioActor.generated.h"

class UActorComponent;
class UAkAudioEvent;
class UAkComponent;
class UNiagaraComponent;
class UObject;

UCLASS(Blueprintable)
class ARsAkNiagaraAudioActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraAudioActorActivationMode ActivationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnActivateAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnDeactivateAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomInactiveDurationMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomInactiveDurationMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomActiveDurationMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomActiveDurationMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DurationUserParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudioPostDelayInSeconds;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NiagaraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AudioComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultLoopDuration;
    
public:
    ARsAkNiagaraAudioActor();
    UFUNCTION(BlueprintCallable)
    void PostActivateAudioFromTimer();
    
    UFUNCTION(BlueprintCallable)
    void OnSystemFinished(UNiagaraComponent* InNiagaraComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnDeactivate(UActorComponent* ActorComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnActivate(UActorComponent* ActorComponent, bool bReset);
    
    UFUNCTION(BlueprintCallable)
    void HandleSelectObjectEvent(UObject* ChangedObject);
    
    UFUNCTION(BlueprintCallable)
    void DeActivateFromTimer();
    
    UFUNCTION(BlueprintCallable)
    void ActivateFromTimer();
    
};

