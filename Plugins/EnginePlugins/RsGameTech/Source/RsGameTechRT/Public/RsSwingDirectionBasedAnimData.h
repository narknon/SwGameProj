#pragma once
#include "CoreMinimal.h"
#include "ERsAttackSwingDirection.h"
#include "RsCharacterAnimationData.h"
#include "RsDirectionalAnimData.h"
#include "RsSwingDirectionBasedAnimData.generated.h"

UCLASS(Blueprintable)
class URsSwingDirectionBasedAnimData : public URsDirectionalAnimData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERsAttackSwingDirection, FRsCharacterAnimationData> DirectionalAnimationDataMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData DefaultAnimation;
    
public:
    URsSwingDirectionBasedAnimData();
};

