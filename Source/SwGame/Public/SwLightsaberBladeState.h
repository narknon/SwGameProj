#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SwLightsaberBladeState.generated.h"

USTRUCT(BlueprintType)
struct FSwLightsaberBladeState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PosWs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DirWs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExtended;
    
    SWGAME_API FSwLightsaberBladeState();
};

