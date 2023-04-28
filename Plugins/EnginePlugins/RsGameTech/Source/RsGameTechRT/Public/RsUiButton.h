#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RsButtonEventDelegate.h"
#include "RsButtonEventNavigationDelegate.h"
#include "RsUiButton.generated.h"

class URsUiButton;
class URsUiWindow;
class UScrollBox;

UCLASS(Blueprintable)
class URsUiButton : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsButtonEvent OnAcceptedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsButtonEventNavigation OnFocusedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsButtonEvent OnUnfocusedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartFocused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 FocusGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptHoldTimeMinVisualPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFocusOnMouseHover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAcceptOnMouseClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsUiWindow* ContainingUiWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ContainingScrollBox;
    
public:
    URsUiButton();
    UFUNCTION(BlueprintCallable)
    void SetFocusGroup(uint8 InFocusGroup);
    
    UFUNCTION(BlueprintCallable)
    void SetFocused(bool bFocusDesired, bool bFromUserNavigation);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnfocused();
    
    UFUNCTION(BlueprintCallable)
    void OnOwningWindowFocusGroupStatusChanged(uint8 FocusGroupChanged);
    
    UFUNCTION(BlueprintCallable)
    void OnOwningWindowFocusChanged(URsUiButton* NewFocusedButton, bool bFromUserNavigation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusGroupEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusGroupDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocused(bool bFromUserNavigation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAccepted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFocusGroupEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFocused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetFocusGroup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsUiWindow* GetContainingUiWindow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAcceptHoldTimeMinVisualPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAcceptHoldTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAcceptHoldProgressPercent() const;
    
};

