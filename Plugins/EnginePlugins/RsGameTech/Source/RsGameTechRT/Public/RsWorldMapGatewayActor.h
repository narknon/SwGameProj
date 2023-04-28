#pragma once
#include "CoreMinimal.h"
#include "Rs/RsMapSectionTag.h"
#include "ERsWorldMapGatewayState.h"
#include "RsWorldMapActor.h"
#include "RsWorldMapGatewayActor.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class ARsWorldMapGatewayActor : public ARsWorldMapActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GatewayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWorldMapGatewayState CachedGatewayState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWorldMapGatewayState ResolvedGatewayState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredNumberOfConnectedSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsConnectedToSecreteArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideSecretAreaVisibility;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanTurnOnFogOfWar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ConnectedSectionsExplored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsMapSectionTag> ConnectedSections;
    
public:
    ARsWorldMapGatewayActor();
    UFUNCTION(BlueprintCallable)
    void SetCanTurnOnFogOfWar(const bool CanTurnOnFogOfWar);
    
    UFUNCTION(BlueprintCallable)
    void ResolveGatewayState();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveGatewayBeginPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnWorldMapOpenOrLoadedWhileOpen();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateSectionVisibility(bool bIsSection0Visible, bool bIsSection1Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetGatewayWidth(float InWidth);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRsMapSectionTag> GetConnectedSections() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanTurnOnFogOfWar() const;
    
    UFUNCTION(BlueprintCallable)
    void CacheGatewayState(ERsWorldMapGatewayState InState);
    
};

