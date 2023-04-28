#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ERsWeaponIkWeaponType.h"
#include "RsAnimNotifyState_EnableWeaponIk.generated.h"

class URsWeaponIkModifier;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class URsAnimNotifyState_EnableWeaponIk : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWeaponIkWeaponType WeaponType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USkeletalMeshComponent*, URsWeaponIkModifier*> Modifiers;
    
public:
    URsAnimNotifyState_EnableWeaponIk();
};

