#pragma once
#include "CoreMinimal.h"
#include "RsCharacterAnimDataBase.h"
#include "RsCharacterAnimationData.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsCharacterAnimationData : public FRsCharacterAnimDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* AnimAsset;
    
    FRsCharacterAnimationData();
};

