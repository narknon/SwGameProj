#include "SwPinnedRopeActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=RsGameTechRT -ObjectName=RsRopeActor -FallbackName=RsRopeActor
#include "RsRopeActor.h"
#include "SwRopePinComponent.h"

void ASwPinnedRopeActor::OnRopeForcePullStart(URsRopeComponent* Rope) {
}

void ASwPinnedRopeActor::OnRopeForcePullEnd(URsRopeComponent* Rope) {
}

void ASwPinnedRopeActor::OnRopeAttached(URsRopeComponent* Rope, URsRopeAttachmentComponent* RopeAttachment) {
}

void ASwPinnedRopeActor::DetachRope() {
}

ASwPinnedRopeActor::ASwPinnedRopeActor() {
    this->RopeClass = ARsRopeActor::StaticClass();
    this->RopeSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RopeSceneRoot"));
    this->RopePin0 = CreateDefaultSubobject<USwRopePinComponent>(TEXT("SwRopePinComponent0"));
    this->RopeActor = NULL;
    this->ForcePullDetachWaitTime = 0.30f;
    this->bDetachRopeOnForcePull = true;
}

