#pragma once
#include "CoreMinimal.h"
#include "ERsAIBlendspaceInputSource.h"
#include "CombatAttackTableRow.h"
#include "Templates/SubclassOf.h"
#include "AICombatAttackTableRow.generated.h"

class URsAbility;

USTRUCT(BlueprintType)
struct SWGAME_API FAICombatAttackTableRow : public FCombatAttackTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MontageSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StopChainAfterHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SkipParryReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsAbility> ForceAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ForcePushAIChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AltAttackAIChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIBlendspaceInputSource::Type> BlendSpaceInput;
    
    FAICombatAttackTableRow();
};

