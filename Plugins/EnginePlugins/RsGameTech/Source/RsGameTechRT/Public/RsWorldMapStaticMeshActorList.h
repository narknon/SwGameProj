#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapStaticMeshActorList.generated.h"

class ARsWorldMapStaticMeshActor;

USTRUCT(BlueprintType)
struct FRsWorldMapStaticMeshActorList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsWorldMapStaticMeshActor*> StaticMeshActors;
    
    RSGAMETECHRT_API FRsWorldMapStaticMeshActorList();
};

