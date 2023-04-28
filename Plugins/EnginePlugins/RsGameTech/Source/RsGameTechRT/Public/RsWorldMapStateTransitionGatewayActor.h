#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Rs/RsMapSectionTag.h"
#include "GameplayTagContainer.h"
#include "RsMapStateData.h"
#include "RsWorldMapGatewayActor.h"
#include "RsWorldMapStateTransitionGatewayActor.generated.h"

UCLASS(Blueprintable)
class ARsWorldMapStateTransitionGatewayActor : public ARsWorldMapGatewayActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGatewayLocked;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUpdatePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUpdateRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUpdateScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CollectibleTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath StateTransitionComponentId;
    
public:
    ARsWorldMapStateTransitionGatewayActor();
    UFUNCTION(BlueprintCallable)
    void SetIsGatewayLocked(bool bInIsLocked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveStateChanged(int32 State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveMapSectionExplored(const FRsMapSectionTag& MapSection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsMapStateData GetMapStateData() const;
    
};

