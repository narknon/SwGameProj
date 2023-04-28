#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapPIPrimaryPriorityBucket.h"
#include "ERsWorldMapPISecondaryPriority.h"
#include "RsWorldMapActorTypeDefaultData.generated.h"

USTRUCT(BlueprintType)
struct FRsWorldMapActorTypeDefaultData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DescriptionRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideDescriptionRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TranslationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWorldMapPIPrimaryPriorityBucket DefaultPrimaryPriorityBucket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWorldMapPISecondaryPriority DefaultSecondaryPriority;
    
    RSGAMETECHRT_API FRsWorldMapActorTypeDefaultData();
};

