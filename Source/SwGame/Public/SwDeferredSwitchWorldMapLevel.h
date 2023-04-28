#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapLevelType.h"
#include "RsWorldMapLevelLoadedFailedDelegate.h"
#include "RsWorldMapLevelLoadedSucceededDelegate.h"
#include "SwDeferredSwitchWorldMapLevel.generated.h"

USTRUCT(BlueprintType)
struct FSwDeferredSwitchWorldMapLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlanetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWorldMapLevelType LevelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapLevelLoadedSucceeded OnLevelLoadSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapLevelLoadedFailed OnLevelLoadFailure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsValid;
    
    SWGAME_API FSwDeferredSwitchWorldMapLevel();
};

