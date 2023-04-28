#pragma once
#include "CoreMinimal.h"
#include "RsSimpleBlendspaceData.h"
#include "RsSimpleSequenceOrMontageData.h"
#include "RsAICharacterAwarenessReactionAnimations.generated.h"

class URsAICustomAwarenessReactionDefinition;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAICharacterAwarenessReactionAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsSimpleBlendspaceData PrimaryAmbientToAlertReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsSimpleBlendspaceData DefaultAmbientToAlertReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsSimpleSequenceOrMontageData AlertToAmbientReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsSimpleSequenceOrMontageData UnsheatheWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsAICustomAwarenessReactionDefinition* AwarenessReactionOverrideTable;
    
    FRsAICharacterAwarenessReactionAnimations();
};

