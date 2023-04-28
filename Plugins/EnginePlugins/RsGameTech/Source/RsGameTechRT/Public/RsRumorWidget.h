#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ERsRumorState.h"
#include "RsRumorWidget.generated.h"

UCLASS(Blueprintable)
class URsRumorWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnterDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExitDuration;
    
    URsRumorWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateStart(ERsRumorState State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateEnd(ERsRumorState State);
    
};

