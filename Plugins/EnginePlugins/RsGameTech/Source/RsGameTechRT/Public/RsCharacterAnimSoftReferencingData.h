#pragma once
#include "CoreMinimal.h"
#include "RsCharacterAnimDataBase.h"
#include "RsCharacterAnimSoftReferencingData.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsCharacterAnimSoftReferencingData : public FRsCharacterAnimDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimationAsset> AnimationAssetSoftPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimationAsset* AnimAsset;
    
    FRsCharacterAnimSoftReferencingData();
};

