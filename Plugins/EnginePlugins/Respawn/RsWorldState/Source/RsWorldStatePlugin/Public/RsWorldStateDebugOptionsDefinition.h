#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RsWorldStateNodeRef.h"
#include "RsWorldStateDebugOptionsDefinition.generated.h"

UCLASS(Blueprintable)
class URsWorldStateDebugOptionsDefinition : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToCompleteOptionalBranchingFromRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToCompleteOptionalContinuingFromOptional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsWorldStateNodeRef> OptionalNodesToAlwaysComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsWorldStateNodeRef> OptionalNodesToNeverComplete;
    
    URsWorldStateDebugOptionsDefinition();
};

