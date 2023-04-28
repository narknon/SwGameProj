#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "GameplayTagContainer.h"
#include "SwAnimNotifyState_CharacterProjectileDamageProtection.generated.h"

UCLASS(Blueprintable)
class USwAnimNotifyState_CharacterProjectileDamageProtection : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTakeDamageNoReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery RequiredTagQuery;
    
    USwAnimNotifyState_CharacterProjectileDamageProtection();
};

