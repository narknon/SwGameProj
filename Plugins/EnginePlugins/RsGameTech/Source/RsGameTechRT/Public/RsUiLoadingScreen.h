#pragma once
#include "CoreMinimal.h"
#include "RsUiWindow.h"
#include "RsUiLoadingScreen.generated.h"

UCLASS(Blueprintable)
class URsUiLoadingScreen : public URsUiWindow {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartStreamingLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScreenCompleted;
    
public:
    URsUiLoadingScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void SetStartStreamingLoad();
    
    UFUNCTION(BlueprintCallable)
    void SetScreenCompleted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadingStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadingFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsScreenCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanStartStreamingLoad();
    
};

