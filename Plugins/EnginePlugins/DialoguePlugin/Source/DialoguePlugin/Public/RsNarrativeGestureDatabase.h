#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "DialogueGestureParams.h"
#include "RsNarrativeConversationAnimSet.h"
#include "RsNarrativeConversationCharactersToIdleGestureMaps.h"
#include "RsNarrativeConversationDesiredIdlesMap.h"
#include "RsNarrativeConversationIdleData.h"
#include "RsNarrativeConversationIdleRequest.h"
#include "RsNarrativeGestureDatabase.generated.h"

class UAnimationAsset;

UCLASS(Blueprintable)
class URsNarrativeGestureDatabase : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTag> SpeakersToDefaultCharacterIdleTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FRsNarrativeConversationAnimSet> IdleTagsToBestCharacterAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FRsNarrativeConversationCharactersToIdleGestureMaps> GestureTagsToCharacterIdleGestureMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTag> FallbackSpeakerTags_Internal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTagContainer> FallbackSpeakerTagsToSpawnedCharacterTagContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UAnimationAsset>, FRsNarrativeConversationDesiredIdlesMap> StartingIdlesToDesiredIdlesMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UAnimationAsset>, FRsNarrativeConversationIdleData> IdlesToIdleData;
    
    URsNarrativeGestureDatabase();
    UFUNCTION(BlueprintCallable)
    TArray<FSoftObjectPath> GetAllAssetsToPreloadForIdleAsset(TSoftObjectPtr<UAnimationAsset> IdleAsset, UAnimationAsset* CurrentIdle);
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UAnimationAsset> FindTransitionBetweenIdles(TSoftObjectPtr<UAnimationAsset> StartingIdle, TSoftObjectPtr<UAnimationAsset> EndingIdle);
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UAnimationAsset> FindBestIdleForCharacter(FRsNarrativeConversationIdleRequest& IdleRequest);
    
    UFUNCTION(BlueprintCallable)
    void FindBestGestureForCharacter(UPARAM(Ref) FDialogueGestureParams& Gesture);
    
};

