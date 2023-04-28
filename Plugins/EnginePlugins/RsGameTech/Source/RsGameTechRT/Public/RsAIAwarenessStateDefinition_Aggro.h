#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RsAIAwarenessStateDefinition_Aggro.generated.h"

UCLASS(Blueprintable)
class URsAIAwarenessStateDefinition_Aggro : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerAttackRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterAttackRange;
    
public:
    URsAIAwarenessStateDefinition_Aggro();
};

