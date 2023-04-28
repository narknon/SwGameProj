#pragma once
#include "CoreMinimal.h"
#include "ActorInQuicksandVolume.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorInQuicksandVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ActorPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsAffectedByQuicksand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BoundingVolumeImmersionCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeInQuicksand;
    
    SWGAME_API FActorInQuicksandVolume();
};

