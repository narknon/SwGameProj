#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DialogueGestureParams.h"
#include "NarrativeCommonLineData.h"
#include "RsNarrativeConversationIdleRequest.h"
#include "Engine/LatentActionManager.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "BAFTATagListToDialogue.h"
#include "ENarrativeDebugLogType.h"
#include "NarrativeEvent.h"
#include "NarrativeEventResult.h"
#include "NarrativeSpeakerActorList.h"
#include "RAPDialogueMetaData.h"
#include "RsNarrativeChoiceMadeEventDelegate.h"
#include "RsNarrativeLevelTagsChangedEventDelegate.h"
#include "RsNarrativeSystem.generated.h"

class AActor;
class ARsConversation;
class UAkAudioEvent;
class UAnimationAsset;
class UBAFTADatabase;
class UDialogue;
class UNarrativeDatabankTagUnlockMappingDatabase;
class URsClosedCaptionDatabase;
class URsGlobalNarrativeMetadata;
class URsNarrativeGestureDatabase;
class URsNarrativeMetadata;
class USceneComponent;

UCLASS(Blueprintable)
class URsNarrativeSystem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsNarrativeChoiceMadeEvent LVL_NarrativeChoiceMade;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsNarrativeLevelTagsChangedEvent LVL_LevelTagsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsClosedCaptionDatabase* ClosedCaptionDatabase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, float> IdenticalSystemicUIDCooldowns;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBAFTADatabase* GlobalBAFTADatabase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsNarrativeMetadata* NarrativeMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsGlobalNarrativeMetadata* GlobalNarrativeMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FNarrativeSpeakerActorList> RegisteredSpeakers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsNarrativeGestureDatabase* GlobalGestureDatabase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> RecentSetTagsToSetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TagsChangedRecently;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RecentlySetTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RecentlyUnsetTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARsConversation* CurrentPrimaryConversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNarrativeDatabankTagUnlockMappingDatabase* DatabankTagUnlockMappingDatabase;
    
public:
    URsNarrativeSystem();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FNarrativeEventResult TriggerNarrativeEventForActorGroup(FNarrativeEvent Details, const TArray<AActor*>& Actors);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FNarrativeEventResult TriggerNarrativeEvent(FNarrativeEvent Details);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleHubDebug();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TagSetInConversation(FGameplayTag Tag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SpeakerToActor(FGameplayTag SpeakerTag, bool UseClosestSpeakers, AActor*& OutActor, bool& OutReplacedMissingActorWithCal);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SkipToNextConversationLine();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMindTrickNPC(AActor* Actor, bool MindTrickActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshHubChumpConversations();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void QuitToTitle();
    
protected:
    UFUNCTION(BlueprintCallable)
    void QuickSortActorsByDistance(UPARAM(Ref) TArray<AActor*>& Actors, AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFacialAnim(const FNarrativeCommonLineData& LineData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FNarrativeEventResult PlayDialogueForActorGroup(FNarrativeEvent Details, const TArray<AActor*>& Actors);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FNarrativeEventResult PlayDialogue(FNarrativeEvent Details);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRootLevelLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NarrativeResetDialogueCooldowns();
    
    UFUNCTION(BlueprintCallable)
    void LogInTest(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void LogDebug(const FString& Message, int32 DetailLevel, ENarrativeDebugLogType Type, bool AddErrorToMessageLog);
    
protected:
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void LoadDependentAssetAsync(const TSoftObjectPtr<UObject>& DependentAsset, FLatentActionInfo LatentInfo, UObject*& OutLoadedAsset);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsANarrativeSpeaker(AActor* Actor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Initialize();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HaveEventDialogueForActorGroup(FNarrativeEvent Details, const TArray<AActor*>& Actors, bool& Result, TArray<AActor*>& ChosenActors, TSoftObjectPtr<UDialogue>& ChosenDialogue);
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 HashActorTags(TArray<FGameplayTag> Tags);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSystemicTagForCooldownsAndChances(FGameplayTag EventContext, FGameplayTag& Result);
    
protected:
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetPlayedDialogueTag(TSoftObjectPtr<UDialogue> Dialogue);
    
public:
    UFUNCTION(BlueprintCallable)
    URsNarrativeMetadata* GetNarrativeMetadata();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetNameOfCurrentForegroundEvent();
    
    UFUNCTION(BlueprintCallable)
    void GetEventContextForSpeaker(FGameplayTag EventContext, FGameplayTag Speaker, FGameplayTag& Result, bool& Success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FRAPDialogueMetaData GetDialogueMetadata(TSoftObjectPtr<UDialogue> Dialogue) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 GetDialogueFirstPlayedTime(int32 SceneID);
    
public:
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UAnimationAsset> FindBestIdleForCharacter(FRsNarrativeConversationIdleRequest IdleRequest);
    
    UFUNCTION(BlueprintCallable)
    void FindBestGestureForCharacter(UPARAM(Ref) FDialogueGestureParams& Gesture);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DispatchRecentChangedTags();
    
    UFUNCTION(BlueprintCallable)
    void DialogueMatchesRequirements(const FBAFTATagListToDialogue& TagListToDialogue, const FGameplayTag& EventContext, const FGameplayTagContainer& AdditionalContent, bool ForcePlay, bool RequireAllAdditional, bool AllowAutoConversations, bool CheckMaxSpeakerRange, float MaxSpeakerRange, bool& OutResult, int32& OutMatchedTotal, TSoftObjectPtr<UDialogue>& OutDialogue, bool& OutDialogueHasRecentTagRequirements);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugNarrativeVOLog(const FString& TagToLog);
    
    UFUNCTION(BlueprintCallable)
    FString DebugGetAllPlayedDialogueOrderedByFirstPlayTime();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DatabankUnlockableTagSet(const FGameplayTag& UnlockedTag);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClosedCaptionEventListener(UAkAudioEvent* Event, AActor* Actor, USceneComponent* SceneComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CantinaState(float State);
    
};

