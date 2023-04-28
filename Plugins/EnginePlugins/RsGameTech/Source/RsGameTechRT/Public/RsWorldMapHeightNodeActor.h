#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapActor.h"
#include "RsWorldMapHeightNodeActor.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class ARsWorldMapHeightNodeActor : public ARsWorldMapActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ElevationLevel;
    
    ARsWorldMapHeightNodeActor();
};

