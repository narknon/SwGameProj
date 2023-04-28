#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OnRopeCompletelyDetachedDelegate.h"
#include "OnRopeParticleDetachedDelegate.h"
#include "Templates/SubclassOf.h"
#include "SwPinnedRopeActor.generated.h"

class ARsRopeActor;
class URsRopeAttachmentComponent;
class URsRopeComponent;
class USceneComponent;
class USwRopePinComponent;

UCLASS(Blueprintable)
class ASwPinnedRopeActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRopeParticleDetached OnRopeParticleDetached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRopeCompletelyDetached OnRopeCompletelyDetached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARsRopeActor> RopeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RopeSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USwRopePinComponent* RopePin0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARsRopeActor* RopeActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForcePullDetachWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDetachRopeOnForcePull: 1;
    
    ASwPinnedRopeActor();
private:
    UFUNCTION(BlueprintCallable)
    void OnRopeForcePullStart(URsRopeComponent* Rope);
    
    UFUNCTION(BlueprintCallable)
    void OnRopeForcePullEnd(URsRopeComponent* Rope);
    
    UFUNCTION(BlueprintCallable)
    void OnRopeAttached(URsRopeComponent* Rope, URsRopeAttachmentComponent* RopeAttachment);
    
public:
    UFUNCTION(BlueprintCallable)
    void DetachRope();
    
};

