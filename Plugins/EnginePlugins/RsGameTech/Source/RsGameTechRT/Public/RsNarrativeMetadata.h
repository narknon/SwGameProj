#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Rs/ENarrativeCharacterGender.h"
#include "GameplayTagContainer.h"
#include "NarrativeSpeakerCharacterNameList.h"
#include "NarrativeSpeakersToSystemicMultipliers.h"
#include "RsNarrativeMetadata.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class URsNarrativeMetadata : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> SystemicDialogueChances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> SystemicDialogueCooldowns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FNarrativeSpeakersToSystemicMultipliers> EventContextsToSpeakerMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UAkAudioEvent*> CombatSpeakerBreatheInEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UAkAudioEvent*> CombatSpeakerBreatheOutEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FNarrativeSpeakerCharacterNameList> SpeakerTagsToCharacterNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, ENarrativeCharacterGender> SpeakerTagsToCharacterGenders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGameplayTag> DroidSpeakerCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> IdenticalDialogueCooldownPerEventContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultIdenticalDialogueCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultIdenticalSystemicLineCooldown;
    
    URsNarrativeMetadata();
};

