#pragma once
#include "CoreMinimal.h"
#include "SwVehicleDrivingInterfaceComponent.h"
#include "SwJeepDrivingInterfaceComponent.generated.h"

class URsHeroStateModifierDefinition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwJeepDrivingInterfaceComponent : public USwVehicleDrivingInterfaceComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* JeepHeroStateModifier;
    
    USwJeepDrivingInterfaceComponent();
};

