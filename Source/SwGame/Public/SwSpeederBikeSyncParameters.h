#pragma once
#include "CoreMinimal.h"
#include "SwOnSpeederBikeSyncCompleteDelegateDelegate.h"
#include "SwSpeederBikeSyncHeroAutopilotParameters.h"
#include "SwSpeederBikeSyncSecondaryTarget.h"
#include "SwSpeederBikeSyncParameters.generated.h"

class USwSpeederBikeSyncDefinitionDataAsset;

USTRUCT(BlueprintType)
struct SWGAME_API FSwSpeederBikeSyncParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwSpeederBikeSyncDefinitionDataAsset* SyncDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwSpeederBikeSyncSecondaryTarget> SecondaryTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ComponentsSyncBlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowPiecewiseBlendForComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MontagesBlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MontagesBlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSpeederBikeSyncHeroAutopilotParameters HeroAutopilotParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwOnSpeederBikeSyncCompleteDelegate OnComplete;
    
    FSwSpeederBikeSyncParameters();
};

