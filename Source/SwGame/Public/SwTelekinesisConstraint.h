#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SwTelekinesisConstraint.generated.h"

class UPhysicsHandleComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ASwTelekinesisConstraint : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsHandleComponent* PhysicsHandleComponent;
    
public:
    ASwTelekinesisConstraint();
};

