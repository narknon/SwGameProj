#pragma once
#include "CoreMinimal.h"
#include "AkPS5InitializationSettings.h"
#include "AkDPXInitializationSettings.generated.h"

UCLASS(Blueprintable)
class UAkDPXInitializationSettings : public UAkPS5InitializationSettings {
    GENERATED_BODY()
public:
    UAkDPXInitializationSettings();
};

