#pragma once
#include "CoreMinimal.h"
#include "ESwProjectileType.h"
#include "SwProjectileTypeName.generated.h"

USTRUCT(BlueprintType)
struct FSwProjectileTypeName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESwProjectileType> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    SWGAME_API FSwProjectileTypeName();
};

