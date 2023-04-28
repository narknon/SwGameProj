#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ERsWorldStateNodeChangeReason.h"
#include "RsWorldStateNodeRef.h"
#include "RsWorldStateAudioSystem.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class URsWorldStateAudioSystem : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StateAudioEventsTable;
    
public:
    URsWorldStateAudioSystem();
    UFUNCTION(BlueprintCallable)
    void PrintToLog(const FString& InPrintValue);
    
    UFUNCTION(BlueprintCallable)
    void OnWorldStateChanged(FRsWorldStateNodeRef Node, bool bWasCompleted, ERsWorldStateNodeChangeReason Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateWithParams(FRsWorldStateNodeRef Node, bool bWasCompleted, ERsWorldStateNodeChangeReason Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInit();
    
};

