#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SwActorsFloatingInWaterParameters.h"
#include "SwActorsFloatingInWaterDataAsset.generated.h"

UCLASS(Blueprintable)
class USwActorsFloatingInWaterDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwActorsFloatingInWaterParameters Parameters;
    
    USwActorsFloatingInWaterDataAsset();
};

