#pragma once
#include "CoreMinimal.h"
#include "ERsCharacterReaction.h"
#include "RsDirectionAnimationParameters.h"
#include "RsReactionParameters.generated.h"

USTRUCT(BlueprintType)
struct FRsReactionParameters : public FRsDirectionAnimationParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsCharacterReaction ReactionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ChangeCombatState;
    
    RSGAMETECHRT_API FRsReactionParameters();
};

