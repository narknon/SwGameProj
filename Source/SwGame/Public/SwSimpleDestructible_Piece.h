#pragma once
#include "CoreMinimal.h"
#include "SwSimpleDestructible_Piece.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwSimpleDestructible_Piece {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PieceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagePointsNeededToDestroy;
    
    FSwSimpleDestructible_Piece();
};

