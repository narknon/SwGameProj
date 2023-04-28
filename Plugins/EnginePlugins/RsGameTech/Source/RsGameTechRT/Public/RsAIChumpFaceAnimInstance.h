#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "RsAIChumpFaceAnimInstance.generated.h"

class AActor;

UCLASS(Blueprintable)
class URsAIChumpFaceAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* EyeTrackingTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EyeTrackingYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EyeTrackingPitch;
    
    URsAIChumpFaceAnimInstance();
    UFUNCTION(BlueprintCallable)
    void SetEyeTrackingTarget(AActor* NewEyeTrackingTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ChumpAnimBlendRule_UseEyeTracking();
    
};

