#pragma once
#include "CoreMinimal.h"
#include "EDefenseTypes.h"
#include "ERsCharacterDefense.h"
#include "RsDirectionAnimationParameters.h"
#include "SwDefenseParameters.generated.h"

class URsDamageType;

USTRUCT(BlueprintType)
struct FSwDefenseParameters : public FRsDirectionAnimationParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ERsCharacterDefense DefenseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EDefenseTypes DefenseTypeEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<URsDamageType> DamageClass;
    
    SWGAME_API FSwDefenseParameters();
};

