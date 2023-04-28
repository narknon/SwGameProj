#pragma once
#include "CoreMinimal.h"
#include "PhysicsEngine/PhysicsCollisionHandler.h"
#include "RsRagdollCollisionSoundRuntimeData.h"
#include "RsGamePhysicsCollisionHandler.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class URsGamePhysicsCollisionHandler : public UPhysicsCollisionHandler {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<USkeletalMeshComponent>, FRsRagdollCollisionSoundRuntimeData> m_LastPlayedRagdollSounds;
    
    URsGamePhysicsCollisionHandler();
};

