#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapActor.h"
#include "RsWorldMapPlayerActor.generated.h"

class URsWorldMapStaticMeshComponent;

UCLASS(Blueprintable)
class ARsWorldMapPlayerActor : public ARsWorldMapActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsWorldMapStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasYawOnlyRotation;
    
    ARsWorldMapPlayerActor();
};

