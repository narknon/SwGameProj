#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "ActorInQuicksandVolume.h"
#include "SwQuicksandActiveEffect.h"
#include "SwQuicksandOnStartAffectingActorSignatureDelegate.h"
#include "SwQuicksandSettings.h"
#include "Templates/SubclassOf.h"
#include "SwQuicksandActor.generated.h"

class ARsHero;
class ARsNavVolume;
class UPrimitiveComponent;
class URsHeroStateModifierDefinition;
class USwQuicksandSettingsDataAsset;

UCLASS(Blueprintable)
class ASwQuicksandActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableQuicksand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugLogAffectedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugVisualizeEntryPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableQuicksandEntryAnticipation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwQuicksandSettings DefaultSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARsNavVolume* CollisionVolumeActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* QuicksandHeroStateModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwQuicksandSettingsDataAsset* QuicksandSettingsDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> IgnoredActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> IgnoredActorTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> MountExitPoints;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwQuicksandOnStartAffectingActorSignature OnStartAffectingActorEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwQuicksandOnStartAffectingActorSignature OnStopAffectingActorEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* AnticipateQuicksandEntry;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FActorInQuicksandVolume> m_ActorsInQuicksandVolume;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSwQuicksandActiveEffect> m_ActiveEffects;
    
public:
    ASwQuicksandActor();
    UFUNCTION(BlueprintCallable)
    void SetSurfaceDesiredOffset(float TargetOffset, float MovementSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetDirectionalFlowOverride(const bool EnableFlowOverride, const float FlowStrength, const float FlowCharacterMotionInfluenceStrength, const FVector& FlowDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTriggerHeroKill(ARsHero* heroActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopAffectingActor(AActor* actorStoppedBeingAffectedByQuicksand);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartAffectingActor(AActor* actorAffectedByQuicksand);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPrimitiveOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnPrimitiveOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnActorOverlapEnd(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetMountExitLocationScore(FVector FromLocation, FVector ExitLocation);
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentSurfaceWorldZ();
    
    UFUNCTION(BlueprintCallable)
    bool GetBestMountExitLocation(FVector FromLocation, FVector& OutBestLocation);
    
};

