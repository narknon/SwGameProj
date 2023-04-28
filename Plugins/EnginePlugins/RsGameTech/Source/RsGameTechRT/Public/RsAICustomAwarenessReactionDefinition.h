#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RsAICustomAwarenessReactionDefinition.generated.h"

class UAnimationAsset;

UCLASS(Blueprintable)
class URsAICustomAwarenessReactionDefinition : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UAnimationAsset>, UAnimationAsset*> OverrideAnimationTable;
    
    URsAICustomAwarenessReactionDefinition();
};

