#pragma once
#include "CoreMinimal.h"
#include "RsAIAwarenessStateDefinition_Aggro.h"
#include "SwAIAggroTimeOuts.h"
#include "SwAIFightResourceWeights.h"
#include "SwAIFightStyle.h"
#include "SwAIAwarenessStateDefinition_Aggro.generated.h"

UCLASS(Blueprintable)
class USwAIAwarenessStateDefinition_Aggro : public URsAIAwarenessStateDefinition_Aggro {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwAIAggroTimeOuts AggroTimeOuts[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZTargetBonusDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WildcardBonusDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerFightSectorCharacterRadiusMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterFightSectorCharacterRadiusMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwAIFightStyle FightStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwAIFightResourceWeights FightResourceWeights;
    
    USwAIAwarenessStateDefinition_Aggro();
};

