#pragma once
#include "CoreMinimal.h"
#include "RsRagdollCollisionSoundRuntimeData.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsRagdollCollisionSoundRuntimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastTimeSoundWasPlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ImpactSize;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 NumTimesPlayed;
    
    FRsRagdollCollisionSoundRuntimeData();
};

