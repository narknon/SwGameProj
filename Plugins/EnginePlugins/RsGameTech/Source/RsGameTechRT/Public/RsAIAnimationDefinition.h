#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RsAICharacterAnimationData.h"
#include "RsAIAnimationDefinition.generated.h"

UCLASS(Blueprintable)
class URsAIAnimationDefinition : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsAICharacterAnimationData> AICharacterAnimations;
    
    URsAIAnimationDefinition();
};

