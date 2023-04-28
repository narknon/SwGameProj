#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SwPoisonFogOrb.generated.h"

USTRUCT(BlueprintType)
struct RESPAWNNIAGARA_API FSwPoisonFogOrb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    FSwPoisonFogOrb();
};

