#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapDoorActorList.generated.h"

class ARsWorldMapDoorActor;

USTRUCT(BlueprintType)
struct FRsWorldMapDoorActorList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsWorldMapDoorActor*> DoorActors;
    
    RSGAMETECHRT_API FRsWorldMapDoorActorList();
};

