#include "SwUiDatabankFunctionLibrary.h"

bool USwUiDatabankFunctionLibrary::GetSiblingEntries(UObject* WorldContextObject, FGameplayTagContainer& OutEntryURLs, const FGameplayTag InEntryURL, bool bIgnoreUnlockedStatus) {
    return false;
}

TArray<FGameplayTag> USwUiDatabankFunctionLibrary::GetEnemyEncounterHistory() {
    return TArray<FGameplayTag>();
}

bool USwUiDatabankFunctionLibrary::GetDirectChildren(UObject* WorldContextObject, FGameplayTagContainer& OutEntryURLs, const FGameplayTag InBaseURL, bool bIgnoreUnlockedStatus) {
    return false;
}

TArray<FGameplayTag> USwUiDatabankFunctionLibrary::GetDatabankUnlockHistory() {
    return TArray<FGameplayTag>();
}

USwDatabankManager* USwUiDatabankFunctionLibrary::GetDatabankManager(UObject* WorldContextObject) {
    return NULL;
}

UDataTable* USwUiDatabankFunctionLibrary::GetDatabankDatatable(UObject* WorldContextObject) {
    return NULL;
}

FGameplayTagContainer USwUiDatabankFunctionLibrary::GetAllTacticalGuideEntries(UObject* WorldContextObject, bool bIgnoreUnlockedStatus, bool bIgnoreCategories) {
    return FGameplayTagContainer{};
}

FGameplayTagContainer USwUiDatabankFunctionLibrary::GetAllDatabankEntries(UObject* WorldContextObject, bool bIgnoreUnlockedStatus, bool bIgnoreCategories) {
    return FGameplayTagContainer{};
}

USwUiDatabankFunctionLibrary::USwUiDatabankFunctionLibrary() {
}

