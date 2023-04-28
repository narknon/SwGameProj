#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESwBendingMetalDoorForcePullMode.h"
#include "ESwBendingMetalDoorForwardDirectionAxis.h"
#include "ESwGameDestructionSaveType.h"
#include "SwBendingMetalDoorOcillationParameters.h"
#include "SwBendingMetalDoorOnFullyOpenedSignatureDelegate.h"
#include "SwBendingMetalDoorActor.generated.h"

class URsWorldMapDoorComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ASwBendingMetalDoorActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwGameDestructionSaveType SaveGameType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SetToForceIgnoredWhenDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwBendingMetalDoorForwardDirectionAxis ForwardDirectionAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableDebugDrawForAxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReactOnForcePush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForcePushInitialVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForcePushMovementDampingCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReactOnForcePull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwBendingMetalDoorForcePullMode ForcePullMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForcePullInitialVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForcePullMovementDampingCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwBendingMetalDoorOcillationParameters ForcePush_MovementOscillation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwBendingMetalDoorOcillationParameters ForcePush_FinishOscillation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwBendingMetalDoorOcillationParameters ForcePull_MovementOscillation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwBendingMetalDoorOcillationParameters ForcePull_FinishOscillation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsWorldMapDoorComponent* WorldMapDoorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GoBackToInitialPositionAfterTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GoBackToInitialPositionVelocity;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwBendingMetalDoorOnFullyOpenedSignature OnFullyOpenedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* TargetSkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float m_SavedPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 m_SavedEncountersInstance;
    
public:
    ASwBendingMetalDoorActor();
    UFUNCTION(BlueprintCallable)
    static void TriggerPushMovement(AActor* BendingMetalDoorActor, float DirectionMultiplier, float PushInitialVelocity);
    
};

