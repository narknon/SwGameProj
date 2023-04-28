#pragma once
#include "CoreMinimal.h"
#include "RsCameraBehavior.h"
#include "R4CameraBehavior_BranchingCameraBehavior.generated.h"

class URsCameraConditional;

UCLASS(Blueprintable, EditInlineNew)
class UR4CameraBehavior_BranchingCameraBehavior : public URsCameraBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsCameraConditional* Conditional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URsCameraBehavior*> TrueBehaviors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrueBlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URsCameraBehavior*> FalseBehaviors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FalseBlendInTime;
    
public:
    UR4CameraBehavior_BranchingCameraBehavior();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBlendParameters(float& OutBlendTime, const bool bBoolean) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<URsCameraBehavior*> GetBehaviors(const bool bBoolean) const;
    
};

