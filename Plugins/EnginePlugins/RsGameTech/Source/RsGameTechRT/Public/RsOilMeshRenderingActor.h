#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RsOilMeshRenderingActor.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class ARsOilMeshRenderingActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MeshMaterialPtr;
    
public:
    ARsOilMeshRenderingActor();
};

