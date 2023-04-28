#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SwQuicksandInfluenceParameters.h"
#include "SwQuicksandSettingsDataAsset.generated.h"

UCLASS(Blueprintable)
class USwQuicksandSettingsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwQuicksandInfluenceParameters QuicksandParameters;
    
    USwQuicksandSettingsDataAsset();
};

