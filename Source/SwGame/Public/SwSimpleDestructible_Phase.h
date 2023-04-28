#pragma once
#include "CoreMinimal.h"
#include "ERsCharacterType.h"
#include "SwGameDestructibleActorWorldStateSystemPhaseParameters.h"
#include "SwSimpleDestructible_ParticleComponentsToStopEmitting.h"
#include "SwSimpleDestructible_ParticlesToSpawnOnDestruction.h"
#include "SwSimpleDestructible_PhasePhysicsParameters.h"
#include "SwSimpleDestructible_PhaseRadialDamageParameters.h"
#include "SwSimpleDestructible_PhysicsAssetParameters.h"
#include "SwSimpleDestructible_PlayAnimationParameters.h"
#include "SwSimpleDestructible_ReactionOnForcePullParameters.h"
#include "SwSimpleDestructible_ReactionOnForcePushParameters.h"
#include "Templates/SubclassOf.h"
#include "SwSimpleDestructible_Phase.generated.h"

class AActor;
class UAkAudioEvent;
class UDamageType;

USTRUCT(BlueprintType)
struct SWGAME_API FSwSimpleDestructible_Phase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreThisPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagePointsNeededToDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfHitsNeededToDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UDamageType>> AcceptedDamageTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UDamageType>> IgnoredDamageTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> AcceptedDamageFromActorTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<ERsCharacterType>> AcceptedDamageFromCharacterTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<ERsCharacterType>> ProhibitDamageFromCharacterTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DestructionParticleComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwSimpleDestructible_ParticlesToSpawnOnDestruction> ParticlesToSpawnOnDestruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSimpleDestructible_ParticleComponentsToStopEmitting ParticleComponentsToStopEmitting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DestructionSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ComponentsToHideAfterDestruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ComponentsToShowAfterDestruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSimpleDestructible_PhysicsAssetParameters PhysicsAssetParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSimpleDestructible_PhasePhysicsParameters PhysicsParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSimpleDestructible_PhaseRadialDamageParameters RadialDamageParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelfInflictedDamagePointsPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSimpleDestructible_ReactionOnForcePushParameters ReactionOnForcePush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSimpleDestructible_ReactionOnForcePullParameters ReactionOnForcePull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwSimpleDestructible_PlayAnimationParameters> PlayAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> StartMaterialParametersForComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwGameDestructibleActorWorldStateSystemPhaseParameters WorldStateSystemPhaseParams;
    
    FSwSimpleDestructible_Phase();
};

