#include "RsUiButton.h"

void URsUiButton::SetFocusGroup(uint8 InFocusGroup) {
}

void URsUiButton::SetFocused(bool bFocusDesired, bool bFromUserNavigation) {
}


void URsUiButton::OnOwningWindowFocusGroupStatusChanged(uint8 FocusGroupChanged) {
}

void URsUiButton::OnOwningWindowFocusChanged(URsUiButton* NewFocusedButton, bool bFromUserNavigation) {
}





bool URsUiButton::IsFocusGroupEnabled() const {
    return false;
}

bool URsUiButton::IsFocused() const {
    return false;
}

uint8 URsUiButton::GetFocusGroup() const {
    return 0;
}

URsUiWindow* URsUiButton::GetContainingUiWindow() const {
    return NULL;
}

float URsUiButton::GetAcceptHoldTimeMinVisualPercent() const {
    return 0.0f;
}

float URsUiButton::GetAcceptHoldTime() const {
    return 0.0f;
}

float URsUiButton::GetAcceptHoldProgressPercent() const {
    return 0.0f;
}

URsUiButton::URsUiButton() : UUserWidget(FObjectInitializer::Get()) {
    // Null default object.
}

