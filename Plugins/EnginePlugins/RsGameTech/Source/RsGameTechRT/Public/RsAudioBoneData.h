#pragma once
#include "CoreMinimal.h"
#include "RsAudioBoneData.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAudioBoneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoneMoveSpeedMultiplier;
    
    FRsAudioBoneData();
};

