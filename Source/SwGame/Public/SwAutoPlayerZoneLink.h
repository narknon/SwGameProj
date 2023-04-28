#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESwAutoPlayerZoneLinkType.h"
#include "SwAutoPlayerZoneLink.generated.h"

USTRUCT(BlueprintType)
struct FSwAutoPlayerZoneLink {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FromZonePos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ToZonePos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ToZoneId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Cost;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwAutoPlayerZoneLinkType LinkType;
    
    SWGAME_API FSwAutoPlayerZoneLink();
};

