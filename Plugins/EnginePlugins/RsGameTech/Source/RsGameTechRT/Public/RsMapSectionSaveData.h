#pragma once
#include "CoreMinimal.h"
#include "RsMapSectionSaveData.generated.h"

USTRUCT(BlueprintType)
struct FRsMapSectionSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint64 MapSectionTagHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 PackedFlags;
    
    RSGAMETECHRT_API FRsMapSectionSaveData();
};

