#pragma once
#include "CoreMinimal.h"
#include "RsMapSectionFlags.generated.h"

USTRUCT(BlueprintType)
struct FRsMapSectionFlags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 bIsExplored: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 bIsSecretArea: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 bIsFogOfWar: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 bIsNotExplorable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 bIsObjective: 1;
    
    RSGAMETECHRT_API FRsMapSectionFlags();
};

