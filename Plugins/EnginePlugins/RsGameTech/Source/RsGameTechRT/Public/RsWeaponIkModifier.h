#pragma once
#include "CoreMinimal.h"
#include "RsIKModifier.h"
#include "RsWeaponIkEvent.h"
#include "RsWeaponIkModifier.generated.h"

UCLASS(Blueprintable)
class URsWeaponIkModifier : public URsIKModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWeaponIkEvent WeaponIkEvent;
    
    URsWeaponIkModifier();
};

