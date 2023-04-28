#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SwSimpleDestructible_PhaseRadialDamageParameters.generated.h"

class UDamageType;
class URsDamageType;

USTRUCT(BlueprintType)
struct SWGAME_API FSwSimpleDestructible_PhaseRadialDamageParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ApplyRadialDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDelayToApplyDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsDamageType* DamageTypeInst;
    
    FSwSimpleDestructible_PhaseRadialDamageParameters();
};

