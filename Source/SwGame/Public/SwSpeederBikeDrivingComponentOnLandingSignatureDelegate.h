#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SwSpeederBikeDrivingComponentOnLandingSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwSpeederBikeDrivingComponentOnLandingSignature, float, TimeInTheAir, FVector, VelocityWhenLanding);

