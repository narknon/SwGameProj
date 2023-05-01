#include "SwTelekinesisConstraint.h"

#include "PhysicsEngine/PhysicsHandleComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PhysicsHandleComponent -FallbackName=PhysicsHandleComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ASwTelekinesisConstraint::ASwTelekinesisConstraint() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TKConstraint_Scene"));
    this->PhysicsHandleComponent = CreateDefaultSubobject<UPhysicsHandleComponent>(TEXT("TKConstraint_PhysicsHandle"));
}

