#include "RsNarrativeGestureDatabase.h"

TArray<FSoftObjectPath> URsNarrativeGestureDatabase::GetAllAssetsToPreloadForIdleAsset(TSoftObjectPtr<UAnimationAsset> IdleAsset, UAnimationAsset* CurrentIdle) {
    return TArray<FSoftObjectPath>();
}

TSoftObjectPtr<UAnimationAsset> URsNarrativeGestureDatabase::FindTransitionBetweenIdles(TSoftObjectPtr<UAnimationAsset> StartingIdle, TSoftObjectPtr<UAnimationAsset> EndingIdle) {
    return NULL;
}

TSoftObjectPtr<UAnimationAsset> URsNarrativeGestureDatabase::FindBestIdleForCharacter(FRsNarrativeConversationIdleRequest& IdleRequest) {
    return NULL;
}

void URsNarrativeGestureDatabase::FindBestGestureForCharacter(FDialogueGestureParams& Gesture) {
}

URsNarrativeGestureDatabase::URsNarrativeGestureDatabase() {
    // Null default object.
}

