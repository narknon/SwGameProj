#include "SwDFXStateHandler_MountAbove.h"

FVector USwDFXStateHandler_MountAbove::ModifyTargetTestPosition_Implementation(const FVector& InPosition) {
    return FVector{};
}

FVector USwDFXStateHandler_MountAbove::ModifyTargetTestDirection_Implementation(const FVector& InDirection) {
    return FVector{};
}




USwDFXStateHandler_MountAbove::USwDFXStateHandler_MountAbove() {
    this->DismountDescriptionOverride = NULL;
}

