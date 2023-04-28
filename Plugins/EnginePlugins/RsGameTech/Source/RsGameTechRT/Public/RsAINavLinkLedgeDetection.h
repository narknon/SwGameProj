#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RsAINavLinkLedgeDetection.generated.h"

class ARsAINavLink;
class UObject;

UCLASS(Blueprintable)
class URsAINavLinkLedgeDetection : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URsAINavLinkLedgeDetection();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool LedgeDetectForNavLink(UObject* WorldContext, ARsAINavLink* NavLink, FVector& OutLedgeLocation);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool LedgeDetectForEndpoints(UObject* WorldContext, FVector Start, FVector End, FVector& OutLedgeLocation);
    
};

