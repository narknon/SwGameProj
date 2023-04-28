#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RsLevelTagChangeInfo.generated.h"

USTRUCT(BlueprintType)
struct FRsLevelTagChangeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveImmediate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LevelTag;
    
    RSGAMETECHRT_API FRsLevelTagChangeInfo();
};

