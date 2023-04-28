#include "AkAcousticPortal.h"

void AAkAcousticPortal::SnapToDoor(const FVector& Dimensions, const FRotator& AdditionalRotation, const FVector& Offset) {
}

void AAkAcousticPortal::OpenPortal() {
}

void AAkAcousticPortal::OnAssociatedDoorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void AAkAcousticPortal::OnAssociatedDoorDestroyed(AActor* Door) {
}

AkAcousticPortalState AAkAcousticPortal::GetCurrentState() const {
    return AkAcousticPortalState::Closed;
}

void AAkAcousticPortal::ClosePortal() {
}

AAkAcousticPortal::AAkAcousticPortal() {
    // Null default object.
}

