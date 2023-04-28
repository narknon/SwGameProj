#pragma once
#include "CoreMinimal.h"
#include "RsPoseMatchAssets.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FRsPoseMatchAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimationAsset*> Assets;
    
    RSANIMTECHRT_API FRsPoseMatchAssets();
};

