#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SwAnimNotify_AIStartAttackFromTable.generated.h"

class USwAIAttackTableState;

UCLASS(Blueprintable)
class USwAnimNotify_AIStartAttackFromTable : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USwAIAttackTableState* AttackState;
    
    USwAnimNotify_AIStartAttackFromTable();
};

