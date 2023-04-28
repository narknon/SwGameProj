#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ERsUiInputDeviceType.h"
#include "RsUiInputDeviceEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "RsUiRoot.generated.h"

class UObject;
class URsPerformanceIndicatorOverlayBase;
class URsUiRoot;
class URsUiWindow;

UCLASS(Blueprintable)
class URsUiRoot : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsUiInputDeviceEvent OnInputDeviceChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsUiWindow> SavingIndicatorWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsPerformanceIndicatorOverlayBase> PerformanceIndicatorOverlayWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* PerformanceIndicatorOverlayWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> HDRIndicatorWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* HDRIndicatorWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SavingIndicatorZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SavingIndicatorMinDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URsUiWindow*> OpenWindows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URsUiWindow*> MinimizedWindows;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TMap<UClass*, TWeakObjectPtr<URsUiWindow>> ExistingWindows;
    
public:
    URsUiRoot();
    UFUNCTION(BlueprintCallable)
    void SetSavingIndicatorVisible(bool bShowRequested, bool bShowText);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    URsUiWindow* OpenUiWindow(TSubclassOf<URsUiWindow> UiWindowClass, bool bCloseOtherWindows, int32 ZOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSaveGameFailed();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReset();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadGameMissingContent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadGameFailed(bool bHasBackup);
    
    UFUNCTION(BlueprintCallable)
    void MinimizeAllOpenUiWindows();
    
    UFUNCTION(BlueprintCallable)
    void MaximizeAllMinimizedUiWindows();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUiWindowOpen(TSubclassOf<URsUiWindow> UiWindowClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSavingIndicatorTextVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<URsUiWindow*> GetOpenUiWindows() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<URsUiWindow*> GetMinimizedUiWindows() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static URsUiRoot* GetHudRoot(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsUiInputDeviceType GetCurrentUiInputDevice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsUiWindow* FindOpenUiWindowOfClass(TSubclassOf<URsUiWindow> UiWindowClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsUiWindow* FindMinimizedUiWindowOfClass(TSubclassOf<URsUiWindow> UiWindowClass) const;
    
    UFUNCTION(BlueprintCallable)
    bool CloseUiWindowOfClass(TSubclassOf<URsUiWindow> UiWindowClass);
    
    UFUNCTION(BlueprintCallable)
    void CloseAllUiWindows();
    
};

