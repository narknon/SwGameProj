#pragma once
#include "CoreMinimal.h"
#include "RsIKBehaviorDefinition.h"
#include "RsIKBehaviorDefinition_WeaponIk.generated.h"

UCLASS(Blueprintable)
class URsIKBehaviorDefinition_WeaponIk : public URsIKBehaviorDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTwoHandedWeaponRotationAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxOneHandedWeaponRotationAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistFromHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPositionDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDraw;
    
    URsIKBehaviorDefinition_WeaponIk();
};

