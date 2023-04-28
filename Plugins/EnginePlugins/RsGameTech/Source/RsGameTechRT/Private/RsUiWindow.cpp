#include "RsUiWindow.h"

bool URsUiWindow::TryUnfocusedScrollingNavigation(EUINavigation Direction) {
    return false;
}

bool URsUiWindow::TryNavigation(EUINavigation Direction, uint8 FocusGroup, bool bAllowUnfocusedScrolling, bool bPreventWrapping) {
    return false;
}

bool URsUiWindow::TryAcceptForFocusGroup(uint8 FocusGroup, bool bClickedButtonIfSet) {
    return false;
}

bool URsUiWindow::TryAccept() {
    return false;
}

void URsUiWindow::SetShowMouseCursor(const bool bNewShowMouseCursor) {
}

void URsUiWindow::SetFocusGroupToAccept(uint8 FocusGroup) {
}

void URsUiWindow::SetFocusGroupDisabled(uint8 FocusGroup, bool bDisabled) {
}

void URsUiWindow::SetFocusedButton(URsUiButton* ButtonToFocus, bool bFromUserNavigation) {
}

void URsUiWindow::SetDisableGameInput(bool bDisablesGameInput) {
}

void URsUiWindow::SetConsumeInput(bool bNewConsumeInput) {
}

void URsUiWindow::ResetFocusForGroup(uint8 FocusGroup) {
}

void URsUiWindow::ResetFocus() {
}

void URsUiWindow::RequestUnpauseGame() {
}

void URsUiWindow::RequestPauseGame() {
}

void URsUiWindow::RemoveDynamicInputAction(FName ActionName) {
}

void URsUiWindow::PopulateActionNameList(UObject* ContextObject, TArray<FName>& Options) {
}






void URsUiWindow::OnActionReleased(const FName& ActionName, ERsUiInputActionType ActionType) {
}

void URsUiWindow::OnActionPressed(const FName& ActionName, ERsUiInputActionType ActionType) {
}


void URsUiWindow::MinimizeWindow() {
}

void URsUiWindow::MaximizeWindow() {
}

bool URsUiWindow::IsInputEnabled() const {
    return false;
}

bool URsUiWindow::IsInputActionPressed(FName ActionName) const {
    return false;
}

bool URsUiWindow::IsFocusGroupDisabled(uint8 FocusGroup) const {
    return false;
}

bool URsUiWindow::IsFocused(const URsUiButton* Button) const {
    return false;
}

float URsUiWindow::GetInputActionPressElapsedTime(FName ActionName) const {
    return 0.0f;
}

uint8 URsUiWindow::GetFocusGroupToAccept() const {
    return 0;
}

URsUiButton* URsUiWindow::GetFocusedButton(uint8 FocusGroup, bool bClickedButtonIfSet) const {
    return NULL;
}

float URsUiWindow::GetDynamicInputHoldProgressPercent(FName ActionName) const {
    return 0.0f;
}

bool URsUiWindow::GetDisableGameInput() const {
    return false;
}

bool URsUiWindow::GetConsumeInput() const {
    return false;
}

TArray<URsUiButton*> URsUiWindow::GetChildButtons() {
    return TArray<URsUiButton*>();
}

float URsUiWindow::GetAcceptHoldTime() const {
    return 0.0f;
}

float URsUiWindow::GetAcceptHoldProgressPercent() const {
    return 0.0f;
}

void URsUiWindow::EnableInput() {
}

void URsUiWindow::DisableInput() {
}

void URsUiWindow::CloseWindow() {
}

void URsUiWindow::ClearHeldInputActions() {
}

void URsUiWindow::AddDynamicInputConditionalAction(FName ActionName, const FOnRsInputActionWithReturn& OnPressCallback, bool bRepeatWhenHeld) {
}

void URsUiWindow::AddDynamicInputAction(FName ActionName, const FOnRsInputAction& OnPressCallback, bool bRepeatWhenHeld) {
}

void URsUiWindow::AddDynamicHeldInputAction(FName ActionName, const FOnRsInputAction& OnPressCallback, float RequiredHoldDuration, float HoldTimeMinVisualPercent) {
}

URsUiWindow::URsUiWindow() {
    // Null default object.
}

