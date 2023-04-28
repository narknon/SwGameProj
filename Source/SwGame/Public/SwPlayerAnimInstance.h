#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BoneContainer.h"
#include "RsPlayerAnimInstance.h"
#include "AnimState_Ability.h"
#include "SwPlayerAnimInstance.generated.h"

UCLASS(Blueprintable)
class USwPlayerAnimInstance : public URsPlayerAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimState_Ability AbilityState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BuddyDroidAttachBaseDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BuddyDroidAttachPointDelta;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference BuddyDroidAttachBone;
    
public:
    USwPlayerAnimInstance();
};

