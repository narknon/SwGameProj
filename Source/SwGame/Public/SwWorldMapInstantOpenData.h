#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapLevelType.h"
#include "SwSphericalCoordinateData.h"
#include "SwWorldMapInstantOpenData.generated.h"

USTRUCT(BlueprintType)
struct FSwWorldMapInstantOpenData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSphericalCoordinateData CameraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWorldMapLevelType LevelType;
    
    SWGAME_API FSwWorldMapInstantOpenData();
};

