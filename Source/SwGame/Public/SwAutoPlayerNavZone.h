#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SwAutoPlayerZoneLink.h"
#include "SwAutoPlayerNavZone.generated.h"

USTRUCT(BlueprintType)
struct FSwAutoPlayerNavZone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> PolyVerts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox Bounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwAutoPlayerZoneLink> ZoneLinks;
    
    SWGAME_API FSwAutoPlayerNavZone();
};

