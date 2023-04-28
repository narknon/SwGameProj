#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "SwUiOnDatabankEntryAddedDelegate.h"
#include "SwDatabankManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class SWGAME_API USwDatabankManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwUiOnDatabankEntryAdded OnDatabankEntryAdded;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* DatabankURLTable;
    
public:
    USwDatabankManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetTacticalGuideBaseURL();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetDatabankBaseURL();
    
    UFUNCTION(BlueprintCallable)
    static void AddTacticalGuideEncounter(FGameplayTag InTag);
    
};

