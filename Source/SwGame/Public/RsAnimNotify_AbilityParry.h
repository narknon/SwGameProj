#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "Templates/SubclassOf.h"
#include "RsAnimNotify_AbilityParry.generated.h"

class URsAbility;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SWGAME_API URsAnimNotify_AbilityParry : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsAbility> AbilityType;
    
public:
    URsAnimNotify_AbilityParry();
};

