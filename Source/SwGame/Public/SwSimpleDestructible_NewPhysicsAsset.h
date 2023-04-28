#pragma once
#include "CoreMinimal.h"
#include "SwSimpleDestructible_NewPhysicsAsset.generated.h"

class UPhysicsAsset;

USTRUCT(BlueprintType)
struct SWGAME_API FSwSimpleDestructible_NewPhysicsAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetNewPhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* PhysicsAssetRef;
    
    FSwSimpleDestructible_NewPhysicsAsset();
};

