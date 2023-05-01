#include "SwDFXStateHandler_LedgeBelow.h"

void USwDFXStateHandler_LedgeBelow::OnDFXClimbStarted() {
}

FVector USwDFXStateHandler_LedgeBelow::ModifyTargetTestPosition_Implementation(const FVector& InPosition) {
    return FVector{};
}

FVector USwDFXStateHandler_LedgeBelow::ModifyTargetTestDirection_Implementation(const FVector& InDirection) {
    return FVector{};
}



USwDFXStateHandler_LedgeBelow::USwDFXStateHandler_LedgeBelow() {
    this->ClimbUpDescriptionOverride = NULL;
    this->bClimbFinished = false;
}

