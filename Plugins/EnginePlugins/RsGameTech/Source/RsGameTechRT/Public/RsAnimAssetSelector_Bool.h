#pragma once
#include "CoreMinimal.h"
#include "RsAnimAssetSelector.h"
#include "RsAnimAssetSelector_Bool.generated.h"

UCLASS(Blueprintable)
class URsAnimAssetSelector_Bool : public URsAnimAssetSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsAnimAssetSelector* TrueAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsAnimAssetSelector* FalseAsset;
    
    URsAnimAssetSelector_Bool();
};

