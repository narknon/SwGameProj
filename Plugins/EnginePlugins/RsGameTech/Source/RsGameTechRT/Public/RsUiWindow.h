#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "ERsTotalPlayTimeMode.h"
#include "ERsUINavigationInput.h"
#include "ERsUiInputActionType.h"
#include "OnRsInputActionDelegate.h"
#include "OnRsInputActionWithReturnDelegate.h"
#include "RsFocusGroupNavigation.h"
#include "RsUiUserWidget.h"
#include "RsUiWindowEventDelegate.h"
#include "RsUiWindowEventNavigationDelegate.h"
#include "RsUiWindowFocusGroupEventDelegate.h"
#include "RsUiWindow.generated.h"

class UObject;
class URsUiButton;
class URsUiRoot;

UCLASS(Blueprintable)
class URsUiWindow : public URsUiUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsUiWindowEvent OnAcceptedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsUiWindowEventNavigation OnFocusChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsUiWindowFocusGroupEvent OnFocusGroupStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsUiWindowEvent OnNavigationWrappedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPauseGameWhileOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsTotalPlayTimeMode PlayTimeCountingModeWhileOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableGameInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableInputToOtherWindows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsumeInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCloseOnCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyOnClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGameMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGarbageCollectOnClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegisterForAccept;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowMouseCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 FocusGroupToAccept;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeldInputRetriggerDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeldInputRepeatTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeBetweenNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsFocusGroupNavigation> NavigationInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowRightStickUnfocusedScrolling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseNonGridNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNonGridNavAllowWrapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonGridAngleVsDistWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonGridNavMaxAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonGridNavSnapHalfAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> StartingDisabledFocusGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPersistThroughLevelReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollingSpeed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, EUINavigation> ActionDirections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, ERsUINavigationInput> ActionNavigationInputType;
    
    // UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    // Missed Property: DynamicInputActionCallbacks
    // FunctionSignature is nullptr, cannot deduce function for 'DelegateProperty DynamicInputActionCallbacks./Script/RsGameTechRT.RsUiWindow:DynamicInputActionCallbacks'

    
    // UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    // Missed Property: DynamicInputConditionalActionDelegates
    // FunctionSignature is nullptr, cannot deduce function for 'DelegateProperty DynamicInputConditionalActionDelegates./Script/RsGameTechRT.RsUiWindow:DynamicInputConditionalActionDelegates'

    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> HeldInputActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URsUiButton*> FocusedButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URsUiButton*> ChildButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsUiRoot* OwningRoot;
    
public:
    URsUiWindow();
    UFUNCTION(BlueprintCallable)
    bool TryUnfocusedScrollingNavigation(EUINavigation Direction);
    
    UFUNCTION(BlueprintCallable)
    bool TryNavigation(EUINavigation Direction, uint8 FocusGroup, bool bAllowUnfocusedScrolling, bool bPreventWrapping);
    
    UFUNCTION(BlueprintCallable)
    bool TryAcceptForFocusGroup(uint8 FocusGroup, bool bClickedButtonIfSet);
    
    UFUNCTION(BlueprintCallable)
    bool TryAccept();
    
    UFUNCTION(BlueprintCallable)
    void SetShowMouseCursor(const bool bNewShowMouseCursor);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusGroupToAccept(uint8 FocusGroup);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusGroupDisabled(uint8 FocusGroup, bool bDisabled);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusedButton(URsUiButton* ButtonToFocus, bool bFromUserNavigation);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableGameInput(bool bDisablesGameInput);
    
    UFUNCTION(BlueprintCallable)
    void SetConsumeInput(bool bNewConsumeInput);
    
    UFUNCTION(BlueprintCallable)
    void ResetFocusForGroup(uint8 FocusGroup);
    
    UFUNCTION(BlueprintCallable)
    void ResetFocus();
    
    UFUNCTION(BlueprintCallable)
    void RequestUnpauseGame();
    
    UFUNCTION(BlueprintCallable)
    void RequestPauseGame();
    
    UFUNCTION(BlueprintCallable)
    void RemoveDynamicInputAction(FName ActionName);
    
protected:
    UFUNCTION(BlueprintCallable)
    static void PopulateActionNameList(UObject* ContextObject, TArray<FName>& Options);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWindowOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWindowMinimized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWindowMaximized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWindowClosed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusChanged(URsUiButton* NewFocusedButton, bool bFromUserNavigation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnActionReleased(const FName& ActionName, ERsUiInputActionType ActionType);
    
    UFUNCTION(BlueprintCallable)
    void OnActionPressed(const FName& ActionName, ERsUiInputActionType ActionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAccepted(URsUiButton* AcceptedButton);
    
public:
    UFUNCTION(BlueprintCallable)
    void MinimizeWindow();
    
    UFUNCTION(BlueprintCallable)
    void MaximizeWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputActionPressed(FName ActionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFocusGroupDisabled(uint8 FocusGroup) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFocused(const URsUiButton* Button) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInputActionPressElapsedTime(FName ActionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetFocusGroupToAccept() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsUiButton* GetFocusedButton(uint8 FocusGroup, bool bClickedButtonIfSet) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDynamicInputHoldProgressPercent(FName ActionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDisableGameInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetConsumeInput() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<URsUiButton*> GetChildButtons();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAcceptHoldTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAcceptHoldProgressPercent() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableInput();
    
    UFUNCTION(BlueprintCallable)
    void DisableInput();
    
    UFUNCTION(BlueprintCallable)
    void CloseWindow();
    
    UFUNCTION(BlueprintCallable)
    void ClearHeldInputActions();
    
    UFUNCTION(BlueprintCallable)
    void AddDynamicInputConditionalAction(FName ActionName, const FOnRsInputActionWithReturn& OnPressCallback, bool bRepeatWhenHeld);
    
    UFUNCTION(BlueprintCallable)
    void AddDynamicInputAction(FName ActionName, const FOnRsInputAction& OnPressCallback, bool bRepeatWhenHeld);
    
    UFUNCTION(BlueprintCallable)
    void AddDynamicHeldInputAction(FName ActionName, const FOnRsInputAction& OnPressCallback, float RequiredHoldDuration, float HoldTimeMinVisualPercent);
    
};

