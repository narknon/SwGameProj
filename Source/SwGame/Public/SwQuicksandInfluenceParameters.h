#pragma once
#include "CoreMinimal.h"
#include "SwQuicksandInfluencePerType.h"
#include "SwQuicksandInfluenceParameters.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwQuicksandInfluenceParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwQuicksandInfluencePerType> ParametersPerType;
    
    FSwQuicksandInfluenceParameters();
};

