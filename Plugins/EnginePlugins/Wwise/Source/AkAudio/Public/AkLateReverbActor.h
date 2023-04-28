#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "AkLateReverbActor.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API AAkLateReverbActor : public AActor {
    GENERATED_BODY()
public:
    AAkLateReverbActor();
};

