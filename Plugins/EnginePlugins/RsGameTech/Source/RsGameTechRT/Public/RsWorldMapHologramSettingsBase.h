#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "RsWorldMapBeaconSettings.h"
#include "RsWorldMapCullingSettings.h"
#include "RsWorldMapDistanceFadeSettings.h"
#include "RsWorldMapLevelColorMapping.h"
#include "RsWorldMapLocalModeSettings.h"
#include "RsWorldMapParameterCollectionData.h"
#include "RsWorldMapPropertyInspectorSettings.h"
#include "RsWorldPlayerSettings.h"
#include "Templates/SubclassOf.h"
#include "RsWorldMapHologramSettingsBase.generated.h"

class ARsWorldMapBeacon;
class ARsWorldMapBreadCrumbsActor;
class ARsWorldMapGatewayActor;
class ARsWorldMapManagedIconActor;
class ARsWorldMapPlayerActor;
class UDataTable;

UCLASS(Blueprintable)
class URsWorldMapHologramSettingsBase : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> ObjectiveDataTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UDataTable*> GeneratedNavAssistData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UDataTable*> FinalNavAssistData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ARsWorldMapGatewayActor>> ZiplineGateways;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ARsWorldMapGatewayActor>> PotentiallyIgnoredGateways;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ARsWorldMapGatewayActor>> AbsolutelyIgnoredGateways;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ARsWorldMapGatewayActor>> POIGateways;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARsWorldMapBreadCrumbsActor> BreadCrumbActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsWorldMapBeaconSettings> AvailableBeacons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARsWorldMapBeacon> WorldMapBeaconClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapLocalModeSettings LocalModeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapLevelColorMapping ColorMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldPlayerSettings PlayerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HolomapTableFocusPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapPropertyInspectorSettings PropertyInspectorSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapParameterCollectionData ParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapDistanceFadeSettings DistanceFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapCullingSettings CullingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ARsWorldMapManagedIconActor>> ManagedIconActorTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARsWorldMapPlayerActor> PlayerArrowType;
    
    URsWorldMapHologramSettingsBase();
    UFUNCTION(BlueprintCallable)
    FLinearColor GetUnlockedDoorColor() const;
    
    UFUNCTION(BlueprintCallable)
    FLinearColor GetUnlockableDoorColor() const;
    
    UFUNCTION(BlueprintCallable)
    FLinearColor GetLockedDoorColor() const;
    
    UFUNCTION(BlueprintCallable)
    FLinearColor GetGatewayColor() const;
    
};

