#pragma once
#include "CoreMinimal.h"
#include "RsDefenseStateReferenceHelper.generated.h"

class USwDefenseState;

USTRUCT(BlueprintType)
struct FRsDefenseStateReferenceHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USwDefenseState* CombatState;
    
    SWGAME_API FRsDefenseStateReferenceHelper();
};

