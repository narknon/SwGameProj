#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapLevelType.h"
#include "SwWorldMapDeferredLevelChangedData.generated.h"

USTRUCT(BlueprintType)
struct FSwWorldMapDeferredLevelChangedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WorldMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWorldMapLevelType LevelType;
    
    SWGAME_API FSwWorldMapDeferredLevelChangedData();
};

