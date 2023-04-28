#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExplosionEmitterSpawnableData.h"
#include "RsExplosionEmitterSpawnable.generated.h"

class UAkComponent;

UCLASS(Blueprintable)
class ARsExplosionEmitterSpawnable : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExplosionEmitterSpawnableData ExplosionEmitterData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* WhizzbyComponent_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* WhizzbyComponent_R;
    
public:
    ARsExplosionEmitterSpawnable();
};

