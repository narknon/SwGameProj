#pragma once
#include "CoreMinimal.h"
#include "RsAnimAssetSelector.h"
#include "RsAnimRandomSelectorEntry.h"
#include "RsAnimAssetSelector_Random.generated.h"

UCLASS(Blueprintable)
class URsAnimAssetSelector_Random : public URsAnimAssetSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsAnimRandomSelectorEntry> AnimAssets;
    
    URsAnimAssetSelector_Random();
};

