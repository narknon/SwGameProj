#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RsCameraInputs.h"
#include "RsCameraOutputs.h"
#include "RsCameraConditional.generated.h"

UCLASS(Blueprintable)
class URsCameraConditional : public UObject {
    GENERATED_BODY()
public:
    URsCameraConditional();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlueprintEnd(const FRsCameraInputs& Inputs, const FRsCameraOutputs& Outputs);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BlueprintConditional(const FRsCameraInputs& Inputs, const FRsCameraOutputs& Outputs);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlueprintBegin(const FRsCameraInputs& Inputs, const FRsCameraOutputs& Outputs);
    
};

