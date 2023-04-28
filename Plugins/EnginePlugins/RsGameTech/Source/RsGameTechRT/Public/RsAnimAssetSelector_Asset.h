#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsAnimAssetSelector.h"
#include "RsAnimAssetSelector_Asset.generated.h"

class UAnimationAsset;

UCLASS(Blueprintable)
class URsAnimAssetSelector_Asset : public URsAnimAssetSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AnimAssetSoftPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimationAsset* AnimAsset;
    
    URsAnimAssetSelector_Asset();
};

