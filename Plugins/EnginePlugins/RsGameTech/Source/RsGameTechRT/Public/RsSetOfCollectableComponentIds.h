#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsSetOfCollectableComponentIds.generated.h"

USTRUCT(BlueprintType)
struct FRsSetOfCollectableComponentIds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSet<FSoftObjectPath> Set;
    
    RSGAMETECHRT_API FRsSetOfCollectableComponentIds();
};

