#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapActor.h"
#include "RsWorldMapHeightNodeVisualizerActor.generated.h"

class URsWorldMapHeightNodeVisualizerComponent;

UCLASS(Blueprintable)
class ARsWorldMapHeightNodeVisualizerActor : public ARsWorldMapActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsWorldMapHeightNodeVisualizerComponent* HeightNodeVisualizerComponent;
    
public:
    ARsWorldMapHeightNodeVisualizerActor();
};

