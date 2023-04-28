#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Rs/ENarrativeCharacterGender.h"
#include "GameplayTagContainer.h"
#include "RsGlobalNarrativeMetadata.generated.h"

UCLASS(Blueprintable)
class URsGlobalNarrativeMetadata : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, ENarrativeCharacterGender> SpeakerTagsToCharacterGenders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGameplayTag> CoreCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGameplayTag> TagsToIgnoreForDialogueWeighting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> TagParentsWithInternalCharacterLookups;
    
    URsGlobalNarrativeMetadata();
};

