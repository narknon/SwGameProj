#pragma once
#include "CoreMinimal.h"
#include "RsReactionStateReferenceHelper.generated.h"

class USwReactionState;

USTRUCT(BlueprintType)
struct FRsReactionStateReferenceHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USwReactionState* CombatState;
    
    SWGAME_API FRsReactionStateReferenceHelper();
};

