#pragma once
#include "CoreMinimal.h"
#include "NarrativeEvent.h"
#include "SwBeastTameNarrativeEventInfo.generated.h"

USTRUCT(BlueprintType)
struct FSwBeastTameNarrativeEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TameProgressToTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNarrativeEvent NarrativeEvent;
    
    SWGAME_API FSwBeastTameNarrativeEventInfo();
};

