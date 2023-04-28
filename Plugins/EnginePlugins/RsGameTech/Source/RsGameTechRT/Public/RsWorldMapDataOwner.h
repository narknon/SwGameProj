#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Rs/RsMapSectionTag.h"
#include "RsGatewayActorsPerSectionVolume.h"
#include "RsMapSectionData.h"
#include "RsMapSectionSaveData.h"
#include "RsMapSectionTagList.h"
#include "RsMapStateData.h"
#include "RsSphereBounds.h"
#include "RsWorldMapActorList.h"
#include "RsWorldMapDoorActorList.h"
#include "RsWorldMapGatewayActorList.h"
#include "RsWorldMapInteriorData.h"
#include "RsWorldMapNameSequencePair.h"
#include "RsWorldMapRouteLineActorData.h"
#include "RsWorldMapRumorPair.h"
#include "RsWorldMapSectorData.h"
#include "RsWorldMapStaticMeshActorList.h"
#include "RsWorldMapDataOwner.generated.h"

class ARsWorldMapActor;
class ARsWorldMapBeacon;
class ARsWorldMapBreadCrumbsActor;
class ARsWorldMapConnectorActor;
class ARsWorldMapDoorActor;
class ARsWorldMapFocusTargetActor;
class ARsWorldMapGalaxyPlanetActor;
class ARsWorldMapGatewayActor;
class ARsWorldMapHeightNodeActor;
class ARsWorldMapHeightNodeVisualizerActor;
class ARsWorldMapIconActor;
class ARsWorldMapManagedIconActor;
class ARsWorldMapPlayerActor;
class ARsWorldMapRouteLineActor;
class ARsWorldMapSavePointActor;
class ARsWorldMapSequenceActor;
class ARsWorldMapStateTransitionGatewayActor;
class ARsWorldMapStateTransitionStaticMeshActor;
class ARsWorldMapStaticMeshActor;
class IINT_HolomapStateTransition;
class UINT_HolomapStateTransition;

UCLASS(Blueprintable)
class ARsWorldMapDataOwner : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARsWorldMapHeightNodeVisualizerActor* HeightNodeVisualizerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsWorldMapBeacon*> BeaconActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARsWorldMapBreadCrumbsActor* BreadCrumbsActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARsWorldMapPlayerActor* PlayerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WorldMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsWorldMapActor*> LODActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARsWorldMapSequenceActor* SequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsWorldMapNameSequencePair> Sequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsWorldMapGalaxyPlanetActor*> GalaxyPlanetActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsWorldMapConnectorActor*> ConnectorActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsWorldMapRouteLineActor*> RouteLineActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapRouteLineActorData ActiveRouteLineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsWorldMapRouteLineActorData> PreviousActiveRouteLineActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsWorldMapIconActor*> IconActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsWorldMapManagedIconActor*> ManagedIconActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsWorldMapFocusTargetActor*> FocusTargetActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsWorldMapSavePointActor*> SavePointActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsMapSectionData> StaticMapSectionData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint64, int32> MapSectionTagHashToData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FRsMapSectionTag, int32> MapSectionTagToData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsMapSectionData> RuntimeMapSectionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FRsMapSectionSaveData> MapSectionSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsWorldMapSectorData> SectorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsWorldMapInteriorData> InteriorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsMapSectionTag> InitiallyExploredMapSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FRsMapSectionTag> SecreteMapSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRsMapSectionTagList> MapSectionsPerRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> InteriorLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<uint8> ExploredInteriorLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FRsMapSectionTag, FVector> SectionCentroidPositionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FVector> RegionCentroidPositionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FRsMapSectionTag, uint8> InteriorLevelPerMapSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsWorldMapStaticMeshActor*> MapSectionStaticMeshActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsWorldMapStaticMeshActor*> NonMapSectionStaticMeshActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsWorldMapStaticMeshActor*> NonMapSectionTerrainActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsWorldMapActor*> NonMapSectionActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsWorldMapGatewayActor*> GatewayActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsWorldMapStateTransitionGatewayActor*> StateTransitionGatewayActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsWorldMapStateTransitionStaticMeshActor*> StateTransitionStaticMeshActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsWorldMapStateTransitionStaticMeshActor*> StateTransitionNonMapSectionStaticMeshActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsWorldMapDoorActor*> DoorActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsWorldMapActor*> WorldMapActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsWorldMapActor*> WorldMapActorsWithWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FRsMapSectionTag, FRsWorldMapStaticMeshActorList> StaticMeshActorsPerMapSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRsWorldMapStaticMeshActorList> StaticMeshActorsPerRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRsGatewayActorsPerSectionVolume> PossibleRoutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FRsMapSectionTag, FRsWorldMapGatewayActorList> GatewayActorsPerMapSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FRsMapSectionTag, FRsWorldMapDoorActorList> DoorActorsPerMapSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRsWorldMapGatewayActorList> GatewayActorsPerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRsWorldMapDoorActorList> DoorActorsPerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRsWorldMapStaticMeshActorList> StaticMeshActorsPerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FRsMapSectionTag, FRsWorldMapActorList> WorldMapActorsPerMapSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRsWorldMapActorList> WorldMapActorsPerRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FRsWorldMapStaticMeshActorList> StaticMeshActorsPerInteriorLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, ARsWorldMapDoorActor*> DoorComponentIdToDoorActorMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, TScriptInterface<IINT_HolomapStateTransition>> StateTransitionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, ARsWorldMapStateTransitionGatewayActor*> StateTransitionGatewayComponentIdToActorMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, ARsWorldMapStateTransitionStaticMeshActor*> StateTransitionStaticMeshComponentIdToActorMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, FName> CollectableComponentIdToRegionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsWorldMapRumorPair> RumorActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FRsMapStateData> PermanentStateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FRsMapStateData> PendingStateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsSphereBounds WorldBoundingSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UniqueSaveIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsWorldMapHeightNodeActor*> HeightNodesActors;
    
    ARsWorldMapDataOwner();
    UFUNCTION(BlueprintCallable)
    void GatherHeightNodes();
    
};

