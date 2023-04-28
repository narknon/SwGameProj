#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Rs/RsMapSectionTag.h"
#include "RsWorldMapBoundingSphere.generated.h"

class USphereComponent;

UCLASS(Blueprintable)
class ARsWorldMapBoundingSphere : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* BoundingSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsMapSectionTag MapSection;
    
public:
    ARsWorldMapBoundingSphere();
};

