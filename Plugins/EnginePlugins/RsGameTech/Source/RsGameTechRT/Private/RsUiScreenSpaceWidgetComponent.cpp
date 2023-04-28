#include "RsUiScreenSpaceWidgetComponent.h"

void URsUiScreenSpaceWidgetComponent::UpdateWidgetPinningMode(TEnumAsByte<EViewportPaddingMode> ViewportPaddingMode, FViewportPaddingPixels PixelPadding, FViewportPaddingPercentage PercentagePadding) {
}

bool URsUiScreenSpaceWidgetComponent::IsOnScreen() const {
    return false;
}

void URsUiScreenSpaceWidgetComponent::ForceInvisible(bool NewBIsForcedInvisible) {
}

bool URsUiScreenSpaceWidgetComponent::DoesScreenLocationCollideWithWidget(const FVector2D ScreenPosition) {
    return false;
}

URsUiScreenSpaceWidgetComponent::URsUiScreenSpaceWidgetComponent() {
    // Null default object.
}

