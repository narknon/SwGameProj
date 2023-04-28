#pragma once
#include "CoreMinimal.h"
#include "RsAbilityWeightClassData.generated.h"

USTRUCT(BlueprintType)
struct FRsAbilityWeightClassData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWeightForClass;
    
    SWGAME_API FRsAbilityWeightClassData();
};

