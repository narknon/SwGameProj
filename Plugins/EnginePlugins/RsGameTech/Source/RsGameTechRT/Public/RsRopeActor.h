#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RsRopeActor.generated.h"

class URsRopeComponent;

UCLASS(Blueprintable)
class ARsRopeActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsRopeComponent* RopeComponent;
    
    ARsRopeActor();
};

