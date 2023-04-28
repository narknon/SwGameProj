#pragma once
#include "CoreMinimal.h"
#include "FRsPhysicalAnimationMotorStrengthModifierHorizontalAxis.h"
#include "RsPhysicalAnimationMotorsStrengthModifier.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsPhysicalAnimationMotorsStrengthModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoNotUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AnyBoneInJoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CustomBlendCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPhysicalAnimationMotorStrengthModifierHorizontalAxis HorizontalAxisType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizontalAxisRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalAxisScale;
    
    FRsPhysicalAnimationMotorsStrengthModifier();
};

