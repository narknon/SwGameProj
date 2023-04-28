#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "RsWorldMapColorPalette.generated.h"

UCLASS(Blueprintable)
class URsWorldMapColorPalette : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Colors[16];
    
    URsWorldMapColorPalette();
};

