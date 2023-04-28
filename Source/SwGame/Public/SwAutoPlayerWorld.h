#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Templates/SubclassOf.h"
#include "SwAutoPlayerWorld.generated.h"

class ASwAutoPlayerWaypoint;
class UPrimitiveComponent;
class USwAutoPlayerNavigationData;

UCLASS(Blueprintable)
class ASwAutoPlayerWorld : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASwAutoPlayerWaypoint* StartPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASwAutoPlayerWaypoint*> WaypointList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldLootChests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldLootEchos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldLootTreasure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldLootScans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GodMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnemiesIgnorePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceDismount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CancelLedgePullUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvalidateTargetAfterDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvalidateTargetDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugDrawAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugDrawNavMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ChestActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> QuickSqueezeActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ElevatorActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> CallButtonActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> EchoActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> TreasureActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ScanActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ShockFieldType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ZoneInteractType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwAutoPlayerNavigationData* NavigationData;
    
    ASwAutoPlayerWorld();
    UFUNCTION(BlueprintCallable)
    void SetProjectileCollision(UPrimitiveComponent* InCollisionComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetForceStandInPlace(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetForcedLookAt(const FVector& LookAt);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomSpamInput(FName InputAction, bool IsExclusive, float SpamDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomInput(FName InputAction, bool IsExclusive, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void ReloadNavData(const FString& WorldName);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnProjectileOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnProjectileEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsZoneInteractEnabled(const AActor* InteractActor, bool& IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void InvalidateCurrentNavPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetShockFieldShockRadius(const AActor* ElevatorActor, float& ShockRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetElevatorState(const AActor* ElevatorActor, bool& RequiresCall);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetElevatorData(const AActor* ElevatorActor, FVector& CallSwitchDownPos, FVector& CallSwitchUpPos, FVector& PlatformPos, float& ElevatorTime);
    
    UFUNCTION(BlueprintCallable)
    void ClearForcedLookAt();
    
    UFUNCTION(BlueprintCallable)
    void AddCustomInput(FName InputAction, float Duration);
    
};

