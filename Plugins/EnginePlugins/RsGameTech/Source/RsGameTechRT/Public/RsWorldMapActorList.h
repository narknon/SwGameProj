#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapActorList.generated.h"

class ARsWorldMapActor;

USTRUCT(BlueprintType)
struct FRsWorldMapActorList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsWorldMapActor*> Actors;
    
    RSGAMETECHRT_API FRsWorldMapActorList();
};

