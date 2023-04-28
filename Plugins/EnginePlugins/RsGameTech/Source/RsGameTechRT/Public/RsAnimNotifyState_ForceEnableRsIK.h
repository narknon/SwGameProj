#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "RsBitfield_RsIkBoneTypes.h"
#include "RsAnimNotifyState_ForceEnableRsIK.generated.h"

class URsIKForceEnableIKModifier;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class URsAnimNotifyState_ForceEnableRsIK : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsBitfield_RsIkBoneTypes BonesToEnable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USkeletalMeshComponent*, URsIKForceEnableIKModifier*> Modifiers;
    
public:
    URsAnimNotifyState_ForceEnableRsIK();
};

