#pragma once
#include "CoreMinimal.h"
#include "SwProjectileAccuracyEntry.generated.h"

class USwProjectileSpreadingData;

USTRUCT(BlueprintType)
struct SWGAME_API FSwProjectileAccuracyEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OffScreenShotsNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissingShotsNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AccurateShotsNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwProjectileSpreadingData* AccurateSpreadingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwProjectileSpreadingData* MissedSpreadingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwProjectileSpreadingData* ExtendedMissedSpreadingData;
    
    FSwProjectileAccuracyEntry();
};

