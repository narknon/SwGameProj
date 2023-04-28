#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rs/RsMapSectionTag.h"
#include "ERsWorldMapCollectableType.h"
#include "ERsWorldMapGeneralColorType.h"
#include "ERsWorldMapWidgetFilterType.h"
#include "RsBitfield_WorldMapWidgetFilterType.h"
#include "RsGatewayActorsPerSectionVolume.h"
#include "RsMapStateData.h"
#include "RsWorldMapLevelLoadedFailedDelegate.h"
#include "RsWorldMapLevelLoadedSucceededDelegate.h"
#include "RsWorldMapFunctionLibrary.generated.h"

class ARsWorldMapActor;
class ARsWorldMapDoorActor;
class ARsWorldMapGalaxyPlanetActor;
class ARsWorldMapGatewayActor;
class ARsWorldMapHologramBase;
class ARsWorldMapStateTransitionGatewayActor;
class ARsWorldMapStaticMeshActor;
class UDataAsset;
class UObject;
class URsWorldMap;
class URsWorldMapColorPalette;
class URsWorldMapColorPaletteGrouping;

UCLASS(Blueprintable)
class URsWorldMapFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URsWorldMapFunctionLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void UnloadWorldMapStreamingLevels(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ToString(const FRsMapStateData& Data);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SetRegionCollectableCompletionStatus(const UObject* WorldContext, const FName& Region);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SetMapSectionUnexplored(UObject* WorldContext, const FRsMapSectionTag& MapSectionTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SetMapSectionExplored(UObject* WorldContext, const FRsMapSectionTag& MapSectionTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SetGeneralColor(UObject* WorldContext, ERsWorldMapGeneralColorType InType, FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ResetRsWorldMap(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRsBitfield_WorldMapWidgetFilterType MakeFRsBitfield_WorldMapWidgetFilterType(TArray<ERsWorldMapWidgetFilterType> Flags);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void LoadWorldMapVisLevel(const UObject* WorldContext, FName WorldMapName, const FRsWorldMapLevelLoadedSucceeded& OnLevelLoadSuccess, const FRsWorldMapLevelLoadedFailed& OnLevelLoadFailure);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void LoadWorldMapStreamingLevels(const UObject* WorldContext, FName WorldMapName, const FRsWorldMapLevelLoadedSucceeded& OnLevelLoadSuccess, const FRsWorldMapLevelLoadedFailed& OnLevelLoadFailure);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsWorldMapLoaded(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsRootLevelWorldMapCurrentLoaded(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsPendingWorldMapStreaming(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsNonGalaxyWorldMapLoaded(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsMapSectionSecrete(const UObject* WorldContext, const FRsMapSectionTag& MapSectionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsMapSectionExplored(UObject* WorldContext, const FRsMapSectionTag& MapSectionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsAutoExploreEnabled(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UDataAsset* GetWorldMapHologramSettings(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static ARsWorldMapHologramBase* GetWorldMapHologramActor(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<ARsWorldMapActor*> GetWorldMapActorsForRegion(UObject* WorldContext, const FName& Region);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetTransformState(const FRsMapStateData& Data, bool& bIsSet, FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetTotalMapSectionsForWorld(UObject* WorldContext, const FName& WorldName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetTotalMapSectionsForRegion(UObject* WorldContext, const FName& RegionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetTotalCollectablesForWorld(const UObject* WorldContext, const FName& WorldName, ERsWorldMapCollectableType CollectableType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetTotalCollectablesForRegion(const UObject* WorldContext, const FName& Region, ERsWorldMapCollectableType CollectableType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<ARsWorldMapStaticMeshActor*> GetStaticMeshActorsWithInteriorLevel(UObject* WorldContext, uint8 InteriorLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<ARsWorldMapStaticMeshActor*> GetStaticMeshActorsForRegion(UObject* WorldContext, const FName& Region);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<ARsWorldMapStaticMeshActor*> GetStaticMeshActorsForMapSection(UObject* WorldContext, const FRsMapSectionTag& MapSectionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContext"))
    static FName GetSectorEnumName(const UObject* InWorldContext, const FRsMapSectionTag& InTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static URsWorldMap* GetRsWorldMap(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FName GetRootLevelWorldMapName(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FVector GetRegionCentroidPosition(UObject* WorldContext, const FName& RegionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FRsMapSectionTag GetPlanetMapSection(UObject* WorldContext, const FName PlanetName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetNumExploredMapSectionsForWorld(UObject* WorldContext, const FName& WorldName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetNumExploredMapSectionsForRegion(UObject* WorldContext, const FName& RegionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetNumCollectiblesTotalBySector(const UObject* WorldContext, const FName PlanetName, const FName Sector, const ERsWorldMapCollectableType CollectibleType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetNumCollectiblesTotalByRegion(const UObject* WorldContext, const FName PlanetName, const FName Region, const ERsWorldMapCollectableType CollectibleType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetNumCollectiblesTotalByPlanet(const UObject* WorldContext, const FName PlanetName, const ERsWorldMapCollectableType CollectibleType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetNumCollectiblesAcquiredBySector(const UObject* WorldContext, const FName PlanetName, const FName Sector, const ERsWorldMapCollectableType CollectibleType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetNumCollectiblesAcquiredByRegion(const UObject* WorldContext, const FName PlanetName, const FName Region, const ERsWorldMapCollectableType CollectibleType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetNumCollectiblesAcquiredByPlanet(const UObject* WorldContext, const FName PlanetName, const ERsWorldMapCollectableType CollectibleType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetNumCollectablesAcquiredForWorld(const UObject* WorldContext, const FName& WorldName, ERsWorldMapCollectableType CollectableType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetNumAcquiredCollectablesForRegion(const UObject* WorldContext, const FName& Region, ERsWorldMapCollectableType CollectableType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static uint8 GetMapSectionInteriorLevel(UObject* WorldContext, const FRsMapSectionTag& MapSectionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FVector GetMapSectionCentroidPosition(UObject* WorldContext, const FRsMapSectionTag& MapSectionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FName GetLoaded3DMapVisLevelName(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FName GetLoaded3DMapColLevelName(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool GetIsRootLevelWorldMapAutoStreamingEnabled(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContext"))
    static FName GetInteriorEnumName(const UObject* InWorldContext, const FRsMapSectionTag& InTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetIntegerState(const FRsMapStateData& Data, bool& bIsSet, int32& Integer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FLinearColor GetGeneralColor(UObject* WorldContext, ERsWorldMapGeneralColorType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<ARsWorldMapGatewayActor*> GetGatewayActorsForMapSection(UObject* WorldContext, const FRsMapSectionTag& MapSectionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FRsGatewayActorsPerSectionVolume GetGatewayActorsForGoal(UObject* WorldContext, const FName& GoalName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<uint8> GetExploredInteriorLevels(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<ARsWorldMapDoorActor*> GetDoorActorsForMapSection(UObject* WorldContext, const FRsMapSectionTag& MapSectionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FRsMapSectionTag GetCurrentPlayerMapSection(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FName GetCurrentlyLoadedWorldMapName(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<ARsWorldMapStaticMeshActor*> GetAllStaticMeshActorsOfType(UObject* WorldContext, FName MeshType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<ARsWorldMapStateTransitionGatewayActor*> GetAllStateTransitionGatewayActors(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<FName> GetAllRegionNames(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<ARsWorldMapStaticMeshActor*> GetAllNonMapSectionStaticMeshActors(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<ARsWorldMapStaticMeshActor*> GetAllMapSectionStaticMeshActors(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<ARsWorldMapGatewayActor*> GetAllGatewayActorsOfType(UObject* WorldContext, FName GatewayType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<ARsWorldMapGatewayActor*> GetAllGatewayActors(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<ARsWorldMapGalaxyPlanetActor*> GetAllGalaxyPlanetActor(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<ARsWorldMapDoorActor*> GetAllDoorActorsOfType(UObject* WorldContext, FName GatewayType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<ARsWorldMapDoorActor*> GetAllDoorActors(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ExploreAllMapSections(UObject* WorldContext, const FName WorldName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void EnableRootLevelWorldMapAutoStreaming(const UObject* WorldContext, bool bEnabled);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void CommitNavAssistData(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ApplyMapSectionColorPalette(UObject* WorldContext, const URsWorldMapColorPaletteGrouping* InGrouping, const URsWorldMapColorPalette* InPalette);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void AddMapSectionToTranslationBounds(const UObject* WorldContext, const FRsMapSectionTag& MapSectionTag);
    
};

