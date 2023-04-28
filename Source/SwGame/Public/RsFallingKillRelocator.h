#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "RsBitfield_NavState.h"
#include "ERsTopologyMode.h"
#include "ERsFallOutOfWorldResult.h"
#include "RsOnFindingRespawnPointFailureSignatureDelegate.h"
#include "RsOnPlayerTeleportedSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "RsFallingKillRelocator.generated.h"

class AActor;
class UDamageType;
class URsDamageType;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsFallingKillRelocator : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnPlayerTeleportedSignature OnPlayerStartTeleporting;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnPlayerTeleportedSignature OnPlayerTeleported;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnFindingRespawnPointFailureSignature OnFindingRespawnPointFailure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QueryHalfGridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QueryGridSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EdgeAvoidanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EdgeAvoidanceTestsNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThreatAvoidanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThreatAvoidanceCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTrackBackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrackBackInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackBackMinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsBitfield_NavState LocationRecordingNavStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer NoRecordingTags;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsDamageType* FallingKillDamageType;
    
public:
    URsFallingKillRelocator();
    UFUNCTION(BlueprintCallable)
    void UnblockLocationRecording(AActor* BlockerActor);
    
    UFUNCTION(BlueprintCallable)
    void TeleportPlayerToLastAvailableLocation(ERsFallOutOfWorldResult& Result, float DamageAmount, TSubclassOf<UDamageType> DamageTypeClass, float Delay);
    
    UFUNCTION(BlueprintCallable)
    void StopRecordingUntilTeleported();
    
    UFUNCTION(BlueprintCallable)
    void SetMountedHeightOffset(float HeightOffset);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTopologyChanged(ERsTopologyMode previousMode, ERsTopologyMode newMode, float Proximity);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasStoppedRecording();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBestRelocationPoint() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearMountedHeightOffset();
    
    UFUNCTION(BlueprintCallable)
    void ClearHistoryAndSetRelocationPoint(const FVector& InLocation, const FRotator& InRotation, bool bClampToGround);
    
    UFUNCTION(BlueprintCallable)
    void ClearHistoryAndSetRelocationComponent(USceneComponent* InComponent, bool bUseOverrideRotation, FRotator OverrideRotation, bool bClampToGround);
    
    UFUNCTION(BlueprintCallable)
    void BlockLocationRecording(AActor* BlockerActor, const FString& Reason);
    
};

