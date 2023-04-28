#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RsAIAwarenessStateSettings_Aggro.h"
#include "RsAIAwarenessStateSettings_Alert.h"
#include "RsAIScoreDecayCurve.h"
#include "Templates/SubclassOf.h"
#include "RsAISenseComponent.generated.h"

class AActor;
class AController;
class UDamageType;
class URsAISensor;
class URsAISensorDefinition;
class URsTargetableComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsAISenseComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URsAISensorDefinition*> DefaultSensorDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URsAISensorDefinition*> SensorDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<URsAISensor>> StimuliClasses;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIScoreDecayCurve FullyAwareToPartiallyAwareCurve;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIScoreDecayCurve PartiallyAwareToUnawareCurve;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIAwarenessStateSettings_Alert AlertAwarenessState;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIAwarenessStateSettings_Aggro AggroAwarenessState;
    
public:
    URsAISenseComponent();
    UFUNCTION(BlueprintCallable)
    bool RemoveSensorDefinition(TSubclassOf<URsAISensor> SensorClass);
    
private:
    UFUNCTION(BlueprintCallable)
    void OwnerDiedHandler(AActor* DeadActor);
    
public:
    UFUNCTION(BlueprintCallable)
    bool OverrideSensorDefinition(const URsAISensorDefinition* NewOverrideSensorDefinition);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFactionChanged(URsTargetableComponent* TargetableComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnActorAwareOfTookAnyOrNoDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnActorAwareOfDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void EnableStimuliFromScript(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void EnableSensorsFromScript(bool Enabled);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddSensorDefinition(const URsAISensorDefinition* NewOverrideSensorDefinition);
    
};

