#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ProjectileDeflectedSignatureDelegate.h"
#include "ProjectileReflectedSignatureDelegate.h"
#include "SwProjectileComponent.h"
#include "SwReflectableProjectileComponent.generated.h"

class AActor;
class ARsCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwReflectableProjectileComponent : public USwProjectileComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bReflected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReflectable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDeflectable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreReflectionEnabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileReflectedSignature OnProjectileReflected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileDeflectedSignature OnProjectileDeflected;
    
    USwReflectableProjectileComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UpdatePreReflectionBP(float InPreReflectionStartTime, float InCurrentTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldNativeReflect(ARsCharacter* ProjectileInstigator, ARsCharacter* ReflectionInstigator) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldNativeDeflect(ARsCharacter* ProjectileInstigator, ARsCharacter* ReflectionInstigator) const;
    
    UFUNCTION(BlueprintCallable)
    void ReflectTowardsOwner(ARsCharacter* ReflectionInstigator, AActor* OverrideTarget, float InNewSpeed, FName InSocketName, FVector DefaultTrackingOffset);
    
    UFUNCTION(BlueprintCallable)
    void ReflectTowardsCamera(ARsCharacter* ReflectionInstigator, float InNewSpeed);
    
    UFUNCTION(BlueprintCallable)
    void ReflectTowardsActor(AActor* TargetToReflectTowards, float InNewSpeed, FName InSocketName, FVector DefaultTrackingOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreReflectionStartedBP(ARsCharacter* ReflectionCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreReflectionEndedBP();
    
};

