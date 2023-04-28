#pragma once
#include "CoreMinimal.h"
#include "RsAttackStateReferenceHelper.generated.h"

class USwAttackState;

USTRUCT(BlueprintType)
struct FRsAttackStateReferenceHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USwAttackState* CombatState;
    
    SWGAME_API FRsAttackStateReferenceHelper();
};

