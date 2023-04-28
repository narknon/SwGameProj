#pragma once
#include "CoreMinimal.h"
#include "RsAIResource.h"
#include "RsAIResourceProviderId.h"
#include "RsAIResource_BlueprintBase.generated.h"

class UObject;

UCLASS(Blueprintable)
class URsAIResource_BlueprintBase : public URsAIResource {
    GENERATED_BODY()
public:
    URsAIResource_BlueprintBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ReceiveTryAcquireResource(UObject* Requester, const FRsAIResourceProviderId& ProviderId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveStopPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveStartPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveResourceReleased(UObject* Owner, const FRsAIResourceProviderId& ProviderId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveResourceAcquired(UObject* Owner, const FRsAIResourceProviderId& ProviderId);
    
};

