#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AudioDebrisOutputData.generated.h"

USTRUCT(BlueprintType)
struct FAudioDebrisOutputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Locations;
    
    SWGAME_API FAudioDebrisOutputData();
};

