#pragma once
#include "CoreMinimal.h"
#include "RsAchievementConfig.generated.h"

USTRUCT(BlueprintType)
struct FRsAchievementConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AchievementMapPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IgnoredAchievementIds;
    
    RSGAMETECHRT_API FRsAchievementConfig();
};

