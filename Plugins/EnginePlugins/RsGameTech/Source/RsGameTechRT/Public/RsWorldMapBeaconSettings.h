#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsWorldMapBeaconSettings.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FRsWorldMapBeaconSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FLinearColor BeaconColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    UTexture2D* BeaconIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString AurebeshCharacter;
    
    RSGAMETECHRT_API FRsWorldMapBeaconSettings();
};

