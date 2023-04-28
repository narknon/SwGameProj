#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsWorldStateNodeRef.generated.h"

class URsWorldStateDefinition;

USTRUCT(BlueprintType)
struct RSWORLDSTATEPLUGIN_API FRsWorldStateNodeRef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    URsWorldStateDefinition* Definition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGuid NodeGuid;
    
    FRsWorldStateNodeRef();
};

