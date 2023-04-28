#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RsAbilitySystemTask.generated.h"

UCLASS(Abstract, Blueprintable, HideDropdown)
class SWGAME_API URsAbilitySystemTask : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* AbilitySystemTaskType;
    
public:
    URsAbilitySystemTask();
};

