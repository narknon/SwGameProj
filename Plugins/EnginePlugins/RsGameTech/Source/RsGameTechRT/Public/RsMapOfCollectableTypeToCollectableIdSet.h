#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapCollectableType.h"
#include "RsSetOfCollectableComponentIds.h"
#include "RsMapOfCollectableTypeToCollectableIdSet.generated.h"

USTRUCT(BlueprintType)
struct FRsMapOfCollectableTypeToCollectableIdSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<ERsWorldMapCollectableType, FRsSetOfCollectableComponentIds> Map;
    
    RSGAMETECHRT_API FRsMapOfCollectableTypeToCollectableIdSet();
};

