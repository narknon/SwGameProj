#pragma once
#include "CoreMinimal.h"
#include "Components/Image.h"
#include "OnAsyncImageEventDelegate.h"
#include "SwAsyncImage.generated.h"

class UWidget;

UCLASS(Blueprintable)
class USwAsyncImage : public UImage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* LoadingWidget;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAsyncImageEvent OnAsyncImageLoadStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAsyncImageEvent OnAsyncImageLoadComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAsyncImageEvent OnAsyncImageLoadCanceled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAsyncImageEvent OnAsyncImageBrushChanged;
    
    USwAsyncImage();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowLoadingWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetLoadingWidget(UWidget* InLoadingWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideLoadingWidget();
    
};

