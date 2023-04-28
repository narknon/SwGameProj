#pragma once
#include "CoreMinimal.h"
#include "RsCameraBehavior.h"
#include "RsCameraInputs.h"
#include "RsCameraOutputs.h"
#include "R4CameraBehavior_Blueprintable.generated.h"

UCLASS(Abstract, Blueprintable, Deprecated, EditInlineNew, NotPlaceable)
class UDEPRECATED_R4CameraBehavior_Blueprintable : public URsCameraBehavior {
    GENERATED_BODY()
public:
    UDEPRECATED_R4CameraBehavior_Blueprintable();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Update(const FRsCameraInputs& Inputs, const FRsCameraOutputs& PreviousOutputs, FRsCameraOutputs& Outputs);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void End(const FRsCameraInputs& Inputs, const FRsCameraOutputs& PreviousOutputs, FRsCameraOutputs& Outputs);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Begin(const FRsCameraInputs& Inputs, const FRsCameraOutputs& PreviousOutputs, FRsCameraOutputs& Outputs);
    
};

