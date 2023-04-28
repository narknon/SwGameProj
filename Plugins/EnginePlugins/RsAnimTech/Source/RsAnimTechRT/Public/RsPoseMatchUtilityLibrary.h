#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RsPoseMatchAssets.h"
#include "RsPoseMatchUtilityLibrary.generated.h"

class UAnimationAsset;

UCLASS(Blueprintable)
class URsPoseMatchUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URsPoseMatchUtilityLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasValidPoseMatchAsset(const FRsPoseMatchAssets& PoseMatchInput);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UAnimationAsset*> GetAnimationAssets(const FRsPoseMatchAssets& PoseMatchInput);
    
};

