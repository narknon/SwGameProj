#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERsCharacterType.h"
#include "ESwHolofightArena.h"
#include "SwHolofightRoundData.generated.h"

USTRUCT(BlueprintType)
struct FSwHolofightRoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FightPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESwHolofightArena> Arena;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<ERsCharacterType>> AIs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> SpawnTransforms;
    
    SWGAME_API FSwHolofightRoundData();
};

