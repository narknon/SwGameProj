#include "SwForceBeastTameAbility.h"





bool USwForceBeastTameAbility::IsTargetValidBP_Implementation(const AActor* InTarget) const {
    return false;
}

bool USwForceBeastTameAbility::IsBeastTameInProgress() const {
    return false;
}

float USwForceBeastTameAbility::GetTameDurationScaleBP_Implementation() const {
    return 0.0f;
}

bool USwForceBeastTameAbility::CanDoBeastTame() const {
    return false;
}

USwForceBeastTameAbility::USwForceBeastTameAbility() {
    // Null default object.
}

