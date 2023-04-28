#pragma once
#include "CoreMinimal.h"
#include "RsReactionDefinitionData.generated.h"

class URsDirectionAnimDataAsset;
class URsReactionState;

USTRUCT(BlueprintType)
struct FRsReactionDefinitionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsDirectionAnimDataAsset* AnimRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPutInReactionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotateCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsReactionState* ReactionDescriptionTemplate;
    
    RSGAMETECHRT_API FRsReactionDefinitionData();
};

