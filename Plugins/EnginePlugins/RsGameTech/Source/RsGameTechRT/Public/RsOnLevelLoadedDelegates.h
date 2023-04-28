#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapLevelLoadedFailureMultiDelegate.h"
#include "RsWorldMapLevelLoadedSuccessMultiDelegate.h"
#include "RsOnLevelLoadedDelegates.generated.h"

USTRUCT(BlueprintType)
struct FRsOnLevelLoadedDelegates {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WorldMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapLevelLoadedSuccessMulti Success;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapLevelLoadedFailureMulti Failure;
    
    RSGAMETECHRT_API FRsOnLevelLoadedDelegates();
};

