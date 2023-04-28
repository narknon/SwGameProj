#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERsCharacterType.h"
#include "RsAIPOISyncSlotData.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FRsAIPOISyncSlotData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SyncSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SyncLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MotionParmName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TEnumAsByte<ERsCharacterType>> CharacterTypeFilter;
    
    RSGAMETECHRT_API FRsAIPOISyncSlotData();
};

