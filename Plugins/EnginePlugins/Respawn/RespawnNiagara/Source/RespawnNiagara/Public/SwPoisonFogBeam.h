#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SwPoisonFogBeam.generated.h"

USTRUCT(BlueprintType)
struct RESPAWNNIAGARA_API FSwPoisonFogBeam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EndPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    FSwPoisonFogBeam();
};

