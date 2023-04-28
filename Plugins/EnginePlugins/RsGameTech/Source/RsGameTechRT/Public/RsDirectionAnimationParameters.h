#pragma once
#include "CoreMinimal.h"
#include "ERsAttackSwingDirection.h"
#include "ERsAttackerDirection.h"
#include "RsDirectionAnimationParameters.generated.h"

USTRUCT(BlueprintType)
struct FRsDirectionAnimationParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsAttackerDirection AttackerDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsAttackSwingDirection AttackSwingDirection;
    
    RSGAMETECHRT_API FRsDirectionAnimationParameters();
};

