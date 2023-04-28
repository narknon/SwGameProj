#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapInteriorData.generated.h"

USTRUCT(BlueprintType)
struct FRsWorldMapInteriorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsVisible: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsOnlyVisibleInInteriors: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InteriorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxInteriorElevationLevel;
    
    RSGAMETECHRT_API FRsWorldMapInteriorData();
};

