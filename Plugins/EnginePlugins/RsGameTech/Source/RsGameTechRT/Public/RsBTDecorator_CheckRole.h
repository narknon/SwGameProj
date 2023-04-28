#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ERsAIRole.h"
#include "RsBTDecorator_CheckRole.generated.h"

UCLASS(Blueprintable)
class URsBTDecorator_CheckRole : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIRole::Type> Role;
    
public:
    URsBTDecorator_CheckRole();
};

