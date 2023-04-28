#pragma once
#include "CoreMinimal.h"
#include "RsHeroComponent.h"
#include "SwButtonMashComponent.generated.h"

class AActor;
class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwButtonMashComponent : public URsHeroComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float ButtonMashAnimNotifyTimeout;
    
public:
    USwButtonMashComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnDied(AActor* DeadActor);
    
    UFUNCTION(BlueprintCallable)
    void MontageStarted(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void MontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentButtonHoldTime() const;
    
    UFUNCTION(BlueprintCallable)
    float GetCurHoldToPressDuration();
    
};

