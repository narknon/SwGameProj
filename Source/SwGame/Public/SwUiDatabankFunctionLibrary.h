#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "SwUiDatabankFunctionLibrary.generated.h"

class UDataTable;
class UObject;
class USwDatabankManager;

UCLASS(Blueprintable)
class USwUiDatabankFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USwUiDatabankFunctionLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSiblingEntries(UObject* WorldContextObject, FGameplayTagContainer& OutEntryURLs, const FGameplayTag InEntryURL, bool bIgnoreUnlockedStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FGameplayTag> GetEnemyEncounterHistory();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetDirectChildren(UObject* WorldContextObject, FGameplayTagContainer& OutEntryURLs, const FGameplayTag InBaseURL, bool bIgnoreUnlockedStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FGameplayTag> GetDatabankUnlockHistory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USwDatabankManager* GetDatabankManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDataTable* GetDatabankDatatable(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FGameplayTagContainer GetAllTacticalGuideEntries(UObject* WorldContextObject, bool bIgnoreUnlockedStatus, bool bIgnoreCategories);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FGameplayTagContainer GetAllDatabankEntries(UObject* WorldContextObject, bool bIgnoreUnlockedStatus, bool bIgnoreCategories);
    
};

