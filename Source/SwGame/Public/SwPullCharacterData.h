#pragma once
#include "CoreMinimal.h"
#include "SwPullAttachmentCharacterData.h"
#include "SwPullDoubleSlamCharacterData.h"
#include "SwPullStruggleCharacterData.h"
#include "SwPullTractorCharacterData.h"
#include "SwPullTractorCounterCharacterData.h"
#include "SwPullYankCharacterData.h"
#include "SwPullCharacterData.generated.h"

USTRUCT(BlueprintType)
struct FSwPullCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwPullYankCharacterData YankData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwPullTractorCharacterData TractorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwPullStruggleCharacterData StruggleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwPullTractorCounterCharacterData TractorCounterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwPullAttachmentCharacterData AttachmentData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwPullDoubleSlamCharacterData DoubleSlamData;
    
    SWGAME_API FSwPullCharacterData();
};

