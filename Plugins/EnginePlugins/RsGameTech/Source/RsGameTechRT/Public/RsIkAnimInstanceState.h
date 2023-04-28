#pragma once
#include "CoreMinimal.h"
#include "ERsCharacterColliders.h"
#include "RsIkAnimInstanceState.generated.h"

class URsIKModifier;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsIkAnimInstanceState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URsIKModifier*> Modifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsCharacterColliders LastUsedHitCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowDefendingWeaponIk;
    
    FRsIkAnimInstanceState();
};

