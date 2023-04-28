#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "RsLoadingScreenHandlerEventDelegate.h"
#include "RsLoadingScreenHandlerGetEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "RsLoadingScreenHandler.generated.h"

class UObject;
class URsLoadingScreenHandler;
class URsUiLoadingScreen;

UCLASS(Blueprintable)
class URsLoadingScreenHandler : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsLoadingScreenHandlerEvent OnReadyToStartStreamingLoad;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsLoadingScreenHandlerEvent OnFinishedStreamingLoad;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsLoadingScreenHandlerEvent OnLoadingScreenCompleted;
    
protected:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URsUiLoadingScreen> LoadingScreen;
    
public:
    URsLoadingScreenHandler();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URsLoadingScreenHandler* CreateAndRunLoadingScreenHandler(UObject* WorldContextObject, TSubclassOf<URsUiLoadingScreen> LoadingScreenType, const FRsLoadingScreenHandlerGetEvent& IsFinishedLoadingCheck, const bool bAutoCloseScreenOnCompletion, int32 ZOrder);
    
};

