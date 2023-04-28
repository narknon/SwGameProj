#pragma once
#include "CoreMinimal.h"
#include "ViewportPaddingPercentage.generated.h"

USTRUCT(BlueprintType)
struct FViewportPaddingPercentage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Top;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Bottom;
    
    RSGAMETECHRT_API FViewportPaddingPercentage();
};

