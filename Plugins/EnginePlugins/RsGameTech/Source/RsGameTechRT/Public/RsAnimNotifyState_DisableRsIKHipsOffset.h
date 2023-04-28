#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "RsAnimNotifyState_DisableRsIKHipsOffset.generated.h"

class URsIKDisableHipsOffsetModifier;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class URsAnimNotifyState_DisableRsIKHipsOffset : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USkeletalMeshComponent*, URsIKDisableHipsOffsetModifier*> Modifiers;
    
public:
    URsAnimNotifyState_DisableRsIKHipsOffset();
};

