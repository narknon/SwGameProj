#pragma once
#include "CoreMinimal.h"
#include "NarrativeCommonLineData.h"
#include "RAPLineStartedEventData.generated.h"

class AActor;
class UDialogue;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRAPLineStartedEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNarrativeCommonLineData LineData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubtitleAttenuationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDialogue> Dialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLineBackground;
    
    FRAPLineStartedEventData();
};

