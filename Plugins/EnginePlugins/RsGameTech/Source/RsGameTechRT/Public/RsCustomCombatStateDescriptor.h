#pragma once
#include "CoreMinimal.h"
#include "ERsCombatState.h"
#include "RsCustomCombatStateDescriptor.generated.h"

USTRUCT(BlueprintType)
struct FRsCustomCombatStateDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsCombatState::Type> State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    RSGAMETECHRT_API FRsCustomCombatStateDescriptor();
};

