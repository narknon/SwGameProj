#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Components/SkinnedMeshComponent.h"
#include "ERsActorBase.h"
#include "RsTopology.h"
#include "Templates/SubclassOf.h"
#include "rsActor.generated.h"

class AActor;
class UNavigationQueryFilter;
class URsActorMotion;
class URsActorSkeletalMeshComponent;
class URsMotionMatchKineticBaseComponent;

UCLASS(Abstract, Blueprintable, Config=Engine, Const, NonTransient, ProjectUserConfig)
class RSTECHRT_API ArsActor : public ACharacter {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRsSyncInitDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsSyncInitDelegate OnSyncInitDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsActorMotion* MotionModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsMotionMatchKineticBaseComponent* MotionMatchKinetics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsTopology Topology;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsTopology TopologyBumper;
    
    ArsActor();
    UFUNCTION(BlueprintCallable)
    void TeleportDirect(const FVector& DestLocation, const FRotator& DestRotation, const bool bStandingDestination, const bool bMaintainVelocity, const bool bMaintainAnimation, const bool bMaintainFrameOfReference);
    
    UFUNCTION(BlueprintCallable)
    void SetInputDirectionMagnitude(float Magnitude);
    
    UFUNCTION(BlueprintCallable)
    void SetInputDirectionLocal(const FVector2D localDir);
    
    UFUNCTION(BlueprintCallable)
    void SetInputDirection(const FVector worldDir);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultSkeletalAnimTickOption(EVisibilityBasedAnimTickOption TickOption);
    
    UFUNCTION(BlueprintCallable)
    void SetBase(const ERsActorBase base);
    
    UFUNCTION(BlueprintCallable)
    void SetAimDirection(const FVector worldDir, const float intent);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCollisionExclusionForActor(AActor* InOtherActor);
    
    UFUNCTION(BlueprintCallable)
    bool PushSharedMotionParm(FName MotionParm);
    
    UFUNCTION(BlueprintCallable)
    bool PopSharedMotionParm(FName MotionParm);
    
    UFUNCTION(BlueprintCallable)
    void LerpTo(const FVector& Destination, float TimeToTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTopologyModeSet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnGround() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSyncedAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSyncGroup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsActorSkeletalMeshComponent* GetRsMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInputDirectionMagnitude() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetInputDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFeetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDefaultMeshRelativeLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetClampToGeometry() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAimDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetActorLocationForGoalFeetLocation(const FVector& GoalFeetLocation) const;
    
    UFUNCTION(BlueprintCallable)
    bool ComputeIfNearGroundedNavmesh(const FVector& NavmeshQueryExtent, TSubclassOf<UNavigationQueryFilter> NavigationFilterClass);
    
    UFUNCTION(BlueprintCallable)
    bool ClampLocationToGroundAtNearestNavmeshPositionToGoal(const FVector& GoalLocation, TSubclassOf<UNavigationQueryFilter> NavigationFilterClass, const FVector& NavmeshQueryExtent, bool bAssertOnFailure, bool bSkipSweep, bool bSkipOverlapCheck, bool bReturnFootPositionInsteadOfActorPosition, bool bAlignOutPositionToNavmeshInsteadOfGround, FVector& OutClampedPosition);
    
    UFUNCTION(BlueprintCallable)
    void AddCollisionExclusionForActor(AActor* InOtherActor);
    
};

