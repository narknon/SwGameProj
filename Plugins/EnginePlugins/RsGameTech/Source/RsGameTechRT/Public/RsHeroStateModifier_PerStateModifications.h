#pragma once
#include "CoreMinimal.h"
#include "ERsNavState.h"
#include "RsHeroStateModifier_Modifications.h"
#include "RsHeroStateModifier_PerStateModifications.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsHeroStateModifier_PerStateModifications {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsNavState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsHeroStateModifier_Modifications Modifications;
    
    FRsHeroStateModifier_PerStateModifications();
};

