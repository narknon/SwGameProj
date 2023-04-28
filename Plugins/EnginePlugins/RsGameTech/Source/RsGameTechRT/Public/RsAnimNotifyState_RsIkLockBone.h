#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ERsIkBoneType.h"
#include "RsAnimNotifyState_RsIkLockBone.generated.h"

class URsIKCharacterDefinition;
class URsIKOverrideModifier;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class URsAnimNotifyState_RsIkLockBone : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsIkBoneType IkBoneToLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsIKCharacterDefinition* IkDefinition;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USkeletalMeshComponent*, URsIKOverrideModifier*> Modifiers;
    
public:
    URsAnimNotifyState_RsIkLockBone();
};

