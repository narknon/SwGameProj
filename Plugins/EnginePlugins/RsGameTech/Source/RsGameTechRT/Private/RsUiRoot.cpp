#include "RsUiRoot.h"
#include "Templates/SubclassOf.h"

void URsUiRoot::SetSavingIndicatorVisible(bool bShowRequested, bool bShowText) {
}

void URsUiRoot::Reset() {
}

URsUiWindow* URsUiRoot::OpenUiWindow(TSubclassOf<URsUiWindow> UiWindowClass, bool bCloseOtherWindows, int32 ZOrder) {
    return NULL;
}





void URsUiRoot::MinimizeAllOpenUiWindows() {
}

void URsUiRoot::MaximizeAllMinimizedUiWindows() {
}

bool URsUiRoot::IsUiWindowOpen(TSubclassOf<URsUiWindow> UiWindowClass) const {
    return false;
}

bool URsUiRoot::GetSavingIndicatorTextVisible() const {
    return false;
}

TArray<URsUiWindow*> URsUiRoot::GetOpenUiWindows() const {
    return TArray<URsUiWindow*>();
}

TArray<URsUiWindow*> URsUiRoot::GetMinimizedUiWindows() const {
    return TArray<URsUiWindow*>();
}

URsUiRoot* URsUiRoot::GetHudRoot(UObject* WorldContextObject) {
    return NULL;
}

ERsUiInputDeviceType URsUiRoot::GetCurrentUiInputDevice() const {
    return ERsUiInputDeviceType::MouseAndKeyboard;
}

URsUiWindow* URsUiRoot::FindOpenUiWindowOfClass(TSubclassOf<URsUiWindow> UiWindowClass) const {
    return NULL;
}

URsUiWindow* URsUiRoot::FindMinimizedUiWindowOfClass(TSubclassOf<URsUiWindow> UiWindowClass) const {
    return NULL;
}

bool URsUiRoot::CloseUiWindowOfClass(TSubclassOf<URsUiWindow> UiWindowClass) {
    return false;
}

void URsUiRoot::CloseAllUiWindows() {
}

URsUiRoot::URsUiRoot() : UUserWidget(FObjectInitializer::Get()) {
    // Null default object.
}

