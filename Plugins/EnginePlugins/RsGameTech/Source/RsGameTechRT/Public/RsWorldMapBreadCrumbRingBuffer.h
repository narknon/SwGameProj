#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapBreadCrumb.h"
#include "RsWorldMapBreadCrumbRingBuffer.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsWorldMapBreadCrumbRingBuffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FRsWorldMapBreadCrumb> Data;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 StartIdx;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName WorldMapLevel;
    
    FRsWorldMapBreadCrumbRingBuffer();
};

