#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RsMotionMatchExtrapolationSample.h"
#include "RsMotionMatchSequenceEntry.h"
#include "RsMotionMatchConfig.generated.h"

class UAnimSequence;

UCLASS(Blueprintable)
class URsMotionMatchConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SampledBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsMotionMatchExtrapolationSample> TrajectorySamples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsMotionMatchSequenceEntry> Sequences;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> CachedSequenceArray;
    
public:
    URsMotionMatchConfig();
};

