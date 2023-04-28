#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapActor.h"
#include "RsWorldMapBeaconDelegateDelegate.h"
#include "RsWorldMapBeaconSettings.h"
#include "RsWorldMapBeacon.generated.h"

class URsWorldMapUiWidgetComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ARsWorldMapBeacon : public ARsWorldMapActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapBeaconDelegate OnWorldMapBeaconPlaced;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapBeaconDelegate OnWorldMapBeaconRemoved;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FRsWorldMapBeaconSettings BeaconSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 BeaconIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsBeaconActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsWorldMapUiWidgetComponent* WorldMapWidgetComponent;
    
public:
    ARsWorldMapBeacon();
    UFUNCTION(BlueprintCallable)
    void SetBeaconVisibility(bool bInIsVisible);
    
};

