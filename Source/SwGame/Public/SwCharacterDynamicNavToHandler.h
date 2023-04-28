#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SwCharacterDynamicNavToHandler.generated.h"

class USwCharacterNavToComponent;

UINTERFACE(Blueprintable)
class USwCharacterDynamicNavToHandler : public UInterface {
    GENERATED_BODY()
};

class ISwCharacterDynamicNavToHandler : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UpdateNavTo(FVector& OutTargetLocation, FRotator& OutTargetOrientation, const USwCharacterNavToComponent* InNavToComponent, const float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldContinueNavTo(const USwCharacterNavToComponent* InNavToComponent);
    
};

