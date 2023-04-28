#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "NarrativeSpeakerCharacterNameAndConditions.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FNarrativeSpeakerCharacterNameAndConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> RequiredTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> RequiredUnsetTags;
    
    FNarrativeSpeakerCharacterNameAndConditions();
};

