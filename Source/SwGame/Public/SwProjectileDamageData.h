#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SwProjectileDamageData.generated.h"

USTRUCT(BlueprintType)
struct FSwProjectileDamageData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FriendlyDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReflectedDamage;
    
    SWGAME_API FSwProjectileDamageData();
};

