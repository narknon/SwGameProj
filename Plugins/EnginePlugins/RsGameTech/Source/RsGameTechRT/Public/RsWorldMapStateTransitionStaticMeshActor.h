#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Rs/RsMapSectionTag.h"
#include "GameplayTagContainer.h"
#include "ERsWorldMapActorType.h"
#include "ERsWorldMapPositionUpdateType.h"
#include "RsMapStateData.h"
#include "RsWorldMapStaticMeshActor.h"
#include "RsWorldMapStateTransitionStaticMeshActor.generated.h"

UCLASS(Blueprintable)
class ARsWorldMapStateTransitionStaticMeshActor : public ARsWorldMapStaticMeshActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUpdatePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWorldMapPositionUpdateType PositionUpdateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUpdateRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUpdateScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CollectibleTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideWorldMapActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWorldMapActorType OverrideWorldMapActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath StateTransitionComponentId;
    
public:
    ARsWorldMapStateTransitionStaticMeshActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveStateChanged(int32 State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveMapSectionExplored(const FRsMapSectionTag& MapSection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsMapStateData GetMapStateData() const;
    
};

