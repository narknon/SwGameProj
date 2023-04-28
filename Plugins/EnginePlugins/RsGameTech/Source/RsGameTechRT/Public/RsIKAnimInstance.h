#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "RsIKBoneTarget.h"
#include "RsIKAnimInstance.generated.h"

class URsIKBehaviorInstance;
class URsIKCharacterDefinition;

UCLASS(Blueprintable)
class URsIKAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlphaMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsIKCharacterDefinition* Definition;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URsIKBehaviorInstance*> Behaviors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsIKBoneTarget> Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinLegBendAngle;
    
public:
    URsIKAnimInstance();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsIKBoneTarget GetIKBoneTarget(FName BoneName) const;
    
};

