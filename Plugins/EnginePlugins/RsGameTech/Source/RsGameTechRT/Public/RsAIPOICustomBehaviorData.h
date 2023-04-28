#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsAIPOICustomBehaviorData.generated.h"

class UBehaviorTree;

USTRUCT(BlueprintType)
struct FRsAIPOICustomBehaviorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath BehaviorTreeAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInjectAsRootBehaviorTree;
    
    RSGAMETECHRT_API FRsAIPOICustomBehaviorData();
};

