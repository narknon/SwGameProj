#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState_Trail.h"
#include "GameplayTagContainer.h"
#include "AnimNotifyState_WeaponTrail.generated.h"

UCLASS(Blueprintable)
class UAnimNotifyState_WeaponTrail : public UAnimNotifyState_Trail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery RequiredTagQuery;
    
    UAnimNotifyState_WeaponTrail();
};

