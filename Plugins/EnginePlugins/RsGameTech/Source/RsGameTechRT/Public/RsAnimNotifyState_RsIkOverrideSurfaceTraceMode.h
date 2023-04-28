#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ERsIkBoneType.h"
#include "ERsIkSurfaceTraceMode.h"
#include "RsAnimNotifyState_RsIkOverrideSurfaceTraceMode.generated.h"

class URsIKModifier;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class URsAnimNotifyState_RsIkOverrideSurfaceTraceMode : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsIkBoneType IkBoneToLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsIkSurfaceTraceMode OverrideIkSurfaceTraceMode;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USkeletalMeshComponent*, URsIKModifier*> Modifiers;
    
public:
    URsAnimNotifyState_RsIkOverrideSurfaceTraceMode();
};

