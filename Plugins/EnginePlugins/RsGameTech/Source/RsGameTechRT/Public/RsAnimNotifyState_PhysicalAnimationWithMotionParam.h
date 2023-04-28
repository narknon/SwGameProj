#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "RsAnimNotifyState_PhysicalAnimationWithMotionParam_DataPerSkeletalMeshComponent.h"
#include "RsPhysicalAnimationRuntimeProfileParameters.h"
#include "RsAnimNotifyState_PhysicalAnimationWithMotionParam.generated.h"

class URsPhysicalAnimationProfile;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class URsAnimNotifyState_PhysicalAnimationWithMotionParam : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoNotActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsPhysicalAnimationProfile* PhysicalAnimationProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPhysicalAnimationRuntimeProfileParameters PhysicalAnimationOperationParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MotionParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MotionParamIfPhysicalAnimationIsNotSupported;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<USkeletalMeshComponent*, FRsAnimNotifyState_PhysicalAnimationWithMotionParam_DataPerSkeletalMeshComponent> m_SkeletalMeshComponentData;
    
public:
    URsAnimNotifyState_PhysicalAnimationWithMotionParam();
};

