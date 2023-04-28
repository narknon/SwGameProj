#pragma once
#include "CoreMinimal.h"
#include "RsUsingTweaks.generated.h"

class URsTweaksBook;

USTRUCT(BlueprintType)
struct FRsUsingTweaks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, URsTweaksBook*> Map;
    
    RSTECHRT_API FRsUsingTweaks();
};

