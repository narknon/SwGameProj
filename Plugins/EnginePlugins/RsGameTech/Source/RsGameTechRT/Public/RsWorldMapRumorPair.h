#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapRumorPair.generated.h"

class ARsWorldMapRumorActor;

USTRUCT(BlueprintType)
struct FRsWorldMapRumorPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARsWorldMapRumorActor* Actor;
    
    RSGAMETECHRT_API FRsWorldMapRumorPair();
};

