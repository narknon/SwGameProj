#pragma once
#include "CoreMinimal.h"
#include "RsLevelStreamingRecord.generated.h"

USTRUCT(BlueprintType)
struct FRsLevelStreamingRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bShouldBeLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bShouldBeVisible;
    
    RSGAMETECHRT_API FRsLevelStreamingRecord();
};

