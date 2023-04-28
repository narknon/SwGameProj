#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsPhysicalAnimationBaseComponent.h"
#include "RsPhysicalAnimationAttachedActor.h"
#include "RsPhysicalAnimationParameters.h"
#include "RsPhysicalAnimationProfilesQueueOperationData.h"
#include "RsPhysicalAnimationComponent.generated.h"

class AActor;
class URsPhysicalAnimationProfile;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsPhysicalAnimationComponent : public URsPhysicalAnimationBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceToCallTickDuringTickComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawDebugSkeletonFromAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CurrentTestScenario;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Scenario01_Amplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_UseDebugAngularDriveParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DebugAngularDriveParameters_Spring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DebugAngularDriveParameters_Damping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_DebugUseOnlyChildAngularVelocityToDriveMotors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_DebugUseSmoothedAngularVelocitiesToDriveMotors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsPhysicalAnimationProfile* DebugTestScenarioProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DebugOtherActorToApplyTestMovement;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRsPhysicalAnimationProfilesQueueOperationData> m_ProfilesQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRsPhysicalAnimationParameters m_Parameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRsPhysicalAnimationAttachedActor> m_AttachedActors;
    
public:
    URsPhysicalAnimationComponent();
private:
    UFUNCTION(BlueprintCallable)
    void OnPostPerformBlendInPhysics(USkeletalMeshComponent* SkeletalMeshComponent);
    
    UFUNCTION()
    void OnPerformCustomBlendInPhysics_BuddyDroid(USkeletalMeshComponent* SkeletalMeshComponent, const TArray<uint16>& InRequiredBones, TArray<FTransform>& InOutComponentSpaceTransforms, TArray<FTransform>& InBoneSpaceTransforms);
    
    UFUNCTION()
    void OnPerformCustomBlendInPhysics(USkeletalMeshComponent* SkeletalMeshComponent, const TArray<uint16>& InRequiredBones, TArray<FTransform>& InOutComponentSpaceTransforms, TArray<FTransform>& InBoneSpaceTransforms);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnBeforeBlendInPhysics(USkeletalMeshComponent* SkeletalMeshComponent);
    
};

