#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "SwCheatManager.generated.h"

class AActor;
class UActorComponent;

UCLASS(Blueprintable)
class USwCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> DebugActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UActorComponent>> PlayerControllerDebugComponentClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* DebugActorInstance;
    
public:
    USwCheatManager();
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockDatabank();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCheatsMenu();
    
    UFUNCTION(BlueprintCallable, Exec)
    void NarrClearPlayedDialogue();
    
    UFUNCTION(BlueprintCallable, Exec)
    void NarrativeVOLog(const FString& LogTagStr);
    
    UFUNCTION(BlueprintCallable, Exec)
    void NarrativeResetDialogueCooldowns();
    
    UFUNCTION(BlueprintCallable, Exec)
    void NarrativeRefreshChumpConversations();
    
    UFUNCTION(BlueprintCallable, Exec)
    void NarrativePrintDialogueData(int32 SceneID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LogAkBankLoadComponentMaps();
    
    UFUNCTION(BlueprintCallable, Exec)
    void HubDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGoToMenu(FGameplayTag TargetURL);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CantinaState(float State);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AISleepAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIReturnHomeAndGoToSleepAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIGod();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIAwakeAll();
    
};

