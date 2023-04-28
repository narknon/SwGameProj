#pragma once
#include "CoreMinimal.h"
#include "RsSpawnTargetComponent.h"
#include "RsTKDoorSpawnTargetComponent.generated.h"

class UStaticMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsTKDoorSpawnTargetComponent : public URsSpawnTargetComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    URsTKDoorSpawnTargetComponent();
};

