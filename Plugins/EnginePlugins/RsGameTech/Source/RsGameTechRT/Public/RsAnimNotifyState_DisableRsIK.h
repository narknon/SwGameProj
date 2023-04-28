#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "RsBitfield_RsIkBoneTypes.h"
#include "RsAnimNotifyState_DisableRsIK.generated.h"

class URsIKDisableIKModifier;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class URsAnimNotifyState_DisableRsIK : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsBitfield_RsIkBoneTypes BonesToDisable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USkeletalMeshComponent*, URsIKDisableIKModifier*> Modifiers;
    
public:
    URsAnimNotifyState_DisableRsIK();
};

