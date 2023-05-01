#include "SwDFXStateHandler_EdgeAbove.h"

FVector USwDFXStateHandler_EdgeAbove::ModifyTargetTestPosition_Implementation(const FVector& InPosition) {
    return FVector{};
}

FVector USwDFXStateHandler_EdgeAbove::ModifyTargetTestDirection_Implementation(const FVector& InDirection) {
    return FVector{};
}



USwDFXStateHandler_EdgeAbove::USwDFXStateHandler_EdgeAbove() {
    this->JumpOffDescriptionOverride = NULL;
    this->MaxAngleToEdge = 30.00f;
    this->MinDistanceToEdgeForAngleTest = 25.00f;
}

