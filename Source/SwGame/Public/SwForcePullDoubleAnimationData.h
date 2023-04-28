#pragma once
#include "CoreMinimal.h"
#include "RsCharacterAnimationData.h"
#include "SwForcePullDoubleAnimationData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FSwForcePullDoubleAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Tractor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData Push;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData Yank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData Fail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData Slam;
    
    SWGAME_API FSwForcePullDoubleAnimationData();
};

