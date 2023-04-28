#pragma once
#include "CoreMinimal.h"
#include "SwAutoPlayerWaypoint.h"
#include "SwAutoPlayerInteractWaypoint.generated.h"

class AActor;

UCLASS(Blueprintable)
class ASwAutoPlayerInteractWaypoint : public ASwAutoPlayerWaypoint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ZoneInteractActor;
    
    ASwAutoPlayerInteractWaypoint();
};

