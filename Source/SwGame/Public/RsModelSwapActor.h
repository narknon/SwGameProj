#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RsModelSwapActor.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class ARsModelSwapActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ModelSwapMeshComponent;
    
    ARsModelSwapActor();
};

