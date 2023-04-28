#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RsLayeredBlend_LayerInfo.h"
#include "RsLayeredBlendDefinition.generated.h"

UCLASS(Blueprintable)
class URsLayeredBlendDefinition : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsLayeredBlend_LayerInfo> Layers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlendRootMotionByOriginBoneWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceSlowPathAccumulateAdditivePose;
    
    URsLayeredBlendDefinition();
};

