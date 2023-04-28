#pragma once
#include "CoreMinimal.h"
#include "NarrativeSpeakerActorList.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FNarrativeSpeakerActorList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpeakerActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MostRecentSpeakerActor;
    
    FNarrativeSpeakerActorList();
};

