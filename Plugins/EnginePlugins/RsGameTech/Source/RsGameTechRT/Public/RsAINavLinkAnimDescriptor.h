#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsAINavLinkAnimDescriptor.generated.h"

class UAnimationAsset;
class UBlendSpaceBase;
class URsAnimAssetSelector;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAINavLinkAnimDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlendSpaceBase> BlendSpaceAssetPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AnimationAssetPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsAnimAssetSelector* AnimationAssetSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlendspaceAsSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimationAsset* AnimAsset;
    
    FRsAINavLinkAnimDescriptor();
};

