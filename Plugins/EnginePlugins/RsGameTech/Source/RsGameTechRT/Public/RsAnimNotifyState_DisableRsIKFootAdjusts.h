#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "RsAnimNotifyState_DisableRsIKFootAdjusts.generated.h"

class URsIKDisableFootAdjustsModifier;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class URsAnimNotifyState_DisableRsIKFootAdjusts : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USkeletalMeshComponent*, URsIKDisableFootAdjustsModifier*> Modifiers;
    
public:
    URsAnimNotifyState_DisableRsIKFootAdjusts();
};

