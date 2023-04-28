#pragma once
#include "CoreMinimal.h"
#include "ERsWeaponIkActionType.h"
#include "ERsWeaponIkWeaponType.h"
#include "RsWeaponIkEvent.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsWeaponIkEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWeaponIkWeaponType WeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWeaponIkActionType ActionType;
    
    FRsWeaponIkEvent();
};

