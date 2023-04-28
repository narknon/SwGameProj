#pragma once
#include "CoreMinimal.h"
#include "HavokClothSimData.generated.h"

USTRUCT(BlueprintType)
struct FHavokClothSimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SimClothName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Particles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Collidables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSetupForLandscapeCollision;
    
    HAVOKCLOTH_API FHavokClothSimData();
};

