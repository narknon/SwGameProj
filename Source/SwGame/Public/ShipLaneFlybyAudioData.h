#pragma once
#include "CoreMinimal.h"
#include "ShipLaneFlybyAudioData.generated.h"

class UAkComponent;

USTRUCT(BlueprintType)
struct FShipLaneFlybyAudioData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AudioComponent;
    
    SWGAME_API FShipLaneFlybyAudioData();
};

