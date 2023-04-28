#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SwDamageData.generated.h"

class UDamageType;
class URsDamageType;

USTRUCT(BlueprintType)
struct FSwDamageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsDamageType* DamageTypeInst;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsDamageType* DamageTypeForLoading;
    
    SWGAME_API FSwDamageData();
};

