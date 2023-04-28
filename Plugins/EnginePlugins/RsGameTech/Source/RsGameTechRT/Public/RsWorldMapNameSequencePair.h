#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapNameSequencePair.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FRsWorldMapNameSequencePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequence;
    
    RSGAMETECHRT_API FRsWorldMapNameSequencePair();
};

