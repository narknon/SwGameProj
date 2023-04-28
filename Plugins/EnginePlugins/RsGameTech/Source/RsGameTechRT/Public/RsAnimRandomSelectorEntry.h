#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsAnimRandomSelectorEntry.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FRsAnimRandomSelectorEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AnimAssetSoftPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimationAsset* AnimAsset;
    
    RSGAMETECHRT_API FRsAnimRandomSelectorEntry();
};

