#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RsSoftStateObject.generated.h"

class URsSoftStateObject;
class UStateObjectMachineTransition;

UCLASS(Blueprintable)
class URsSoftStateObject : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsSoftStateObject* StateStack;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStateObjectMachineTransition*> PreTransitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStateObjectMachineTransition*> PostTransitions;
    
public:
    URsSoftStateObject();
};

