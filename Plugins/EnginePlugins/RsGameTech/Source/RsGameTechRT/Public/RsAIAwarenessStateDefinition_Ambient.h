#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RsCharacterAnimationData.h"
#include "RsAIAwarenessStateDefinition_Ambient.generated.h"

UCLASS(Blueprintable)
class URsAIAwarenessStateDefinition_Ambient : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WanderRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrequencyMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrequencyMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData FidgetAnimation;
    
    URsAIAwarenessStateDefinition_Ambient();
};

