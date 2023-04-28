#pragma once
#include "CoreMinimal.h"
#include "ERsAttackerDirection.h"
#include "RsCharacterAnimationData.h"
#include "RsDirectionalAnimData.h"
#include "RsAttackerDirectionBasedAnimData.generated.h"

UCLASS(Blueprintable)
class URsAttackerDirectionBasedAnimData : public URsDirectionalAnimData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERsAttackerDirection, FRsCharacterAnimationData> DirectionalAnimationDataMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData DefaultAnimation;
    
public:
    URsAttackerDirectionBasedAnimData();
};

