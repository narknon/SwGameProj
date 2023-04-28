#pragma once
#include "CoreMinimal.h"
#include "NarrativeSpeakerCharacterNameAndConditions.h"
#include "NarrativeSpeakerCharacterNameList.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FNarrativeSpeakerCharacterNameList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNarrativeSpeakerCharacterNameAndConditions> PossibleCharacterDisplayNames;
    
    FNarrativeSpeakerCharacterNameList();
};

