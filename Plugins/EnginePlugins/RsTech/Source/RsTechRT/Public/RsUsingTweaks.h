#pragma once
#include "CoreMinimal.h"
#include "RsUsingTweaks.generated.h"


UCLASS(BlueprintType)
class RSTECHRT_API URsTweaksBook : public UObject
{
    GENERATED_BODY()
public:
	
};

USTRUCT(BlueprintType)
struct FRsUsingTweaks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, URsTweaksBook*> Map;
    
    RSTECHRT_API FRsUsingTweaks();
};

