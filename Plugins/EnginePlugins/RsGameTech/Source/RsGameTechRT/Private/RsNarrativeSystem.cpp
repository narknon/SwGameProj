#include "RsNarrativeSystem.h"


FNarrativeEventResult URsNarrativeSystem::TriggerNarrativeEvent_Implementation(FNarrativeEvent Details) {
    return FNarrativeEventResult{};
}



void URsNarrativeSystem::SpeakerToActor(FGameplayTag SpeakerTag, bool UseClosestSpeakers, AActor*& OutActor, bool& OutReplacedMissingActorWithCal) {
}

bool URsNarrativeSystem::SkipToNextConversationLine_Implementation() {
    return false;
}



void URsNarrativeSystem::QuitToTitle_Implementation() {
}

void URsNarrativeSystem::QuickSortActorsByDistance(TArray<AActor*>& Actors, AActor* OtherActor) {
}






void URsNarrativeSystem::LogInTest(const FString& Message) {
}

void URsNarrativeSystem::LogDebug(const FString& Message, int32 DetailLevel, ENarrativeDebugLogType Type, bool AddErrorToMessageLog) {
}

void URsNarrativeSystem::LoadDependentAssetAsync(const TSoftObjectPtr<UObject>& DependentAsset, FLatentActionInfo LatentInfo, UObject*& OutLoadedAsset) {
}




int32 URsNarrativeSystem::HashActorTags(TArray<FGameplayTag> Tags) {
    return 0;
}

void URsNarrativeSystem::GetSystemicTagForCooldownsAndChances(FGameplayTag EventContext, FGameplayTag& Result) {
}

FGameplayTag URsNarrativeSystem::GetPlayedDialogueTag(TSoftObjectPtr<UDialogue> Dialogue) {
    return FGameplayTag{};
}

URsNarrativeMetadata* URsNarrativeSystem::GetNarrativeMetadata() {
    return NULL;
}


void URsNarrativeSystem::GetEventContextForSpeaker(FGameplayTag EventContext, FGameplayTag Speaker, FGameplayTag& Result, bool& Success) {
}

FRAPDialogueMetaData URsNarrativeSystem::GetDialogueMetadata(TSoftObjectPtr<UDialogue> Dialogue) const {
    return FRAPDialogueMetaData{};
}

int32 URsNarrativeSystem::GetDialogueFirstPlayedTime(int32 SceneID) {
    return 0;
}

TSoftObjectPtr<UAnimationAsset> URsNarrativeSystem::FindBestIdleForCharacter(FRsNarrativeConversationIdleRequest IdleRequest) {
    return NULL;
}

void URsNarrativeSystem::FindBestGestureForCharacter(FDialogueGestureParams& Gesture) {
}

void URsNarrativeSystem::DispatchRecentChangedTags() {
}

void URsNarrativeSystem::DialogueMatchesRequirements(const FBAFTATagListToDialogue& TagListToDialogue, const FGameplayTag& EventContext, const FGameplayTagContainer& AdditionalContent, bool ForcePlay, bool RequireAllAdditional, bool AllowAutoConversations, bool CheckMaxSpeakerRange, float MaxSpeakerRange, bool& OutResult, int32& OutMatchedTotal, TSoftObjectPtr<UDialogue>& OutDialogue, bool& OutDialogueHasRecentTagRequirements) {
}


FString URsNarrativeSystem::DebugGetAllPlayedDialogueOrderedByFirstPlayTime() {
    return TEXT("");
}


void URsNarrativeSystem::ClosedCaptionEventListener(UAkAudioEvent* Event, AActor* Actor, USceneComponent* SceneComponent) {
}


URsNarrativeSystem::URsNarrativeSystem() {
    // Null default object.
}

