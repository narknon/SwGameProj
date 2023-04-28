#pragma once
#include "CoreMinimal.h"
#include "Engine/BlueprintGeneratedClass.h"
#include "TransitionGenerationInfo.h"
#include "RsStateMachineGeneratedClass.generated.h"

class URsSoftStateObject;

UCLASS(Blueprintable)
class URsStateMachineGeneratedClass : public UBlueprintGeneratedClass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, URsSoftStateObject*> StateTemplates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> TemplateToRuntimeNameMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InitialStateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransitionGenerationInfo> Transitions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<URsSoftStateObject*> DefaultStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsSoftStateObject* InitialState;
    
public:
    URsStateMachineGeneratedClass();
};

