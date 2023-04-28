#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RsTriggerSignatureDelegate.h"
#include "RsTriggerBase.generated.h"

class URsBaseTriggerComponent;

UCLASS(Blueprintable)
class ARsTriggerBase : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBroadcastEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsBaseTriggerComponent* TriggerComponent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsTriggerSignature OnTriggerEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsTriggerSignature OnTriggerExited;
    
    ARsTriggerBase();
private:
    UFUNCTION(BlueprintCallable)
    void OnComponentTriggerExited(URsBaseTriggerComponent* Component, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentTriggerEntered(URsBaseTriggerComponent* Component, AActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInTrigger(const AActor* Actor) const;
    
};

