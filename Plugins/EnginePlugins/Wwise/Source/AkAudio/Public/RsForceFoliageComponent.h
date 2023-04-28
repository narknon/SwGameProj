#pragma once
#include "CoreMinimal.h"
#include "AkComponent.h"
#include "RsForceFoliageComponent.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsForceFoliageComponent : public UAkComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FoliageStopEvent;
    
    URsForceFoliageComponent();
};

