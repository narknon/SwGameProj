#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RsAbilitySystemTask.generated.h"

UCLASS(Blueprintable)
class URsAbilitySystemTask : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* AbilitySystemTaskType;
    
public:
    URsAbilitySystemTask();
};

