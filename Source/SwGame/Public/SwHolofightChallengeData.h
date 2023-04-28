#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RsWorldStateNodeRef.h"
#include "ESwHolofightOpponent.h"
#include "SwHolofightRoundData.h"
#include "SwHolofightChallengeData.generated.h"

USTRUCT(BlueprintType)
struct FSwHolofightChallengeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ChallengeDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwHolofightRoundData> RoundsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESwHolofightOpponent> OpponentEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldStateNodeRef ChallengeUnlockedWorldState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldStateNodeRef ChallengeCompleteWorldState;
    
    SWGAME_API FSwHolofightChallengeData();
};

