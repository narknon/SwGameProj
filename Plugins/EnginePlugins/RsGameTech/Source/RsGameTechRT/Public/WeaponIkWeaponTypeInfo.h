#pragma once
#include "CoreMinimal.h"
#include "WeaponIkWeaponTypeInfo.generated.h"

USTRUCT(BlueprintType)
struct FWeaponIkWeaponTypeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponEndSocketName;
    
    RSGAMETECHRT_API FWeaponIkWeaponTypeInfo();
};

