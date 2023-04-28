#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapPIPrimaryPriorityBucket.h"
#include "ERsWorldMapPISecondaryPriority.h"
#include "RsPropertyInspectorData.generated.h"

USTRUCT(BlueprintType)
struct FRsPropertyInspectorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrimaryPriorityOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWorldMapPIPrimaryPriorityBucket PrimaryPriorityBucket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSecondaryPriorityOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWorldMapPISecondaryPriority SecondaryPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDescriptionRowOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DescriptionRow;
    
    RSGAMETECHRT_API FRsPropertyInspectorData();
};

