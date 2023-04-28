#include "RsWorldMapFunctionLibrary.h"

void URsWorldMapFunctionLibrary::UnloadWorldMapStreamingLevels(const UObject* WorldContext) {
}

FString URsWorldMapFunctionLibrary::ToString(const FRsMapStateData& Data) {
    return TEXT("");
}

void URsWorldMapFunctionLibrary::SetRegionCollectableCompletionStatus(const UObject* WorldContext, const FName& Region) {
}

void URsWorldMapFunctionLibrary::SetMapSectionUnexplored(UObject* WorldContext, const FRsMapSectionTag& MapSectionTag) {
}

void URsWorldMapFunctionLibrary::SetMapSectionExplored(UObject* WorldContext, const FRsMapSectionTag& MapSectionTag) {
}

void URsWorldMapFunctionLibrary::SetGeneralColor(UObject* WorldContext, ERsWorldMapGeneralColorType InType, FLinearColor InColor) {
}

void URsWorldMapFunctionLibrary::ResetRsWorldMap(UObject* WorldContext) {
}

FRsBitfield_WorldMapWidgetFilterType URsWorldMapFunctionLibrary::MakeFRsBitfield_WorldMapWidgetFilterType(TArray<ERsWorldMapWidgetFilterType> Flags) {
    return FRsBitfield_WorldMapWidgetFilterType{};
}

void URsWorldMapFunctionLibrary::LoadWorldMapVisLevel(const UObject* WorldContext, FName WorldMapName, const FRsWorldMapLevelLoadedSucceeded& OnLevelLoadSuccess, const FRsWorldMapLevelLoadedFailed& OnLevelLoadFailure) {
}

void URsWorldMapFunctionLibrary::LoadWorldMapStreamingLevels(const UObject* WorldContext, FName WorldMapName, const FRsWorldMapLevelLoadedSucceeded& OnLevelLoadSuccess, const FRsWorldMapLevelLoadedFailed& OnLevelLoadFailure) {
}

bool URsWorldMapFunctionLibrary::IsWorldMapLoaded(const UObject* WorldContext) {
    return false;
}

bool URsWorldMapFunctionLibrary::IsRootLevelWorldMapCurrentLoaded(const UObject* WorldContext) {
    return false;
}

bool URsWorldMapFunctionLibrary::IsPendingWorldMapStreaming(const UObject* WorldContext) {
    return false;
}

bool URsWorldMapFunctionLibrary::IsNonGalaxyWorldMapLoaded(const UObject* WorldContext) {
    return false;
}

bool URsWorldMapFunctionLibrary::IsMapSectionSecrete(const UObject* WorldContext, const FRsMapSectionTag& MapSectionTag) {
    return false;
}

bool URsWorldMapFunctionLibrary::IsMapSectionExplored(UObject* WorldContext, const FRsMapSectionTag& MapSectionTag) {
    return false;
}

bool URsWorldMapFunctionLibrary::IsAutoExploreEnabled(const UObject* WorldContext) {
    return false;
}

UDataAsset* URsWorldMapFunctionLibrary::GetWorldMapHologramSettings(UObject* WorldContext) {
    return NULL;
}

ARsWorldMapHologramBase* URsWorldMapFunctionLibrary::GetWorldMapHologramActor(UObject* WorldContext) {
    return NULL;
}

TArray<ARsWorldMapActor*> URsWorldMapFunctionLibrary::GetWorldMapActorsForRegion(UObject* WorldContext, const FName& Region) {
    return TArray<ARsWorldMapActor*>();
}

void URsWorldMapFunctionLibrary::GetTransformState(const FRsMapStateData& Data, bool& bIsSet, FTransform& Transform) {
}

int32 URsWorldMapFunctionLibrary::GetTotalMapSectionsForWorld(UObject* WorldContext, const FName& WorldName) {
    return 0;
}

int32 URsWorldMapFunctionLibrary::GetTotalMapSectionsForRegion(UObject* WorldContext, const FName& RegionName) {
    return 0;
}

int32 URsWorldMapFunctionLibrary::GetTotalCollectablesForWorld(const UObject* WorldContext, const FName& WorldName, ERsWorldMapCollectableType CollectableType) {
    return 0;
}

int32 URsWorldMapFunctionLibrary::GetTotalCollectablesForRegion(const UObject* WorldContext, const FName& Region, ERsWorldMapCollectableType CollectableType) {
    return 0;
}

TArray<ARsWorldMapStaticMeshActor*> URsWorldMapFunctionLibrary::GetStaticMeshActorsWithInteriorLevel(UObject* WorldContext, uint8 InteriorLevel) {
    return TArray<ARsWorldMapStaticMeshActor*>();
}

TArray<ARsWorldMapStaticMeshActor*> URsWorldMapFunctionLibrary::GetStaticMeshActorsForRegion(UObject* WorldContext, const FName& Region) {
    return TArray<ARsWorldMapStaticMeshActor*>();
}

TArray<ARsWorldMapStaticMeshActor*> URsWorldMapFunctionLibrary::GetStaticMeshActorsForMapSection(UObject* WorldContext, const FRsMapSectionTag& MapSectionTag) {
    return TArray<ARsWorldMapStaticMeshActor*>();
}

FName URsWorldMapFunctionLibrary::GetSectorEnumName(const UObject* InWorldContext, const FRsMapSectionTag& InTag) {
    return NAME_None;
}

URsWorldMap* URsWorldMapFunctionLibrary::GetRsWorldMap(const UObject* WorldContext) {
    return NULL;
}

FName URsWorldMapFunctionLibrary::GetRootLevelWorldMapName(const UObject* WorldContext) {
    return NAME_None;
}

FVector URsWorldMapFunctionLibrary::GetRegionCentroidPosition(UObject* WorldContext, const FName& RegionName) {
    return FVector{};
}

FRsMapSectionTag URsWorldMapFunctionLibrary::GetPlanetMapSection(UObject* WorldContext, const FName PlanetName) {
    return FRsMapSectionTag{};
}

int32 URsWorldMapFunctionLibrary::GetNumExploredMapSectionsForWorld(UObject* WorldContext, const FName& WorldName) {
    return 0;
}

int32 URsWorldMapFunctionLibrary::GetNumExploredMapSectionsForRegion(UObject* WorldContext, const FName& RegionName) {
    return 0;
}

int32 URsWorldMapFunctionLibrary::GetNumCollectiblesTotalBySector(const UObject* WorldContext, const FName PlanetName, const FName Sector, const ERsWorldMapCollectableType CollectibleType) {
    return 0;
}

int32 URsWorldMapFunctionLibrary::GetNumCollectiblesTotalByRegion(const UObject* WorldContext, const FName PlanetName, const FName Region, const ERsWorldMapCollectableType CollectibleType) {
    return 0;
}

int32 URsWorldMapFunctionLibrary::GetNumCollectiblesTotalByPlanet(const UObject* WorldContext, const FName PlanetName, const ERsWorldMapCollectableType CollectibleType) {
    return 0;
}

int32 URsWorldMapFunctionLibrary::GetNumCollectiblesAcquiredBySector(const UObject* WorldContext, const FName PlanetName, const FName Sector, const ERsWorldMapCollectableType CollectibleType) {
    return 0;
}

int32 URsWorldMapFunctionLibrary::GetNumCollectiblesAcquiredByRegion(const UObject* WorldContext, const FName PlanetName, const FName Region, const ERsWorldMapCollectableType CollectibleType) {
    return 0;
}

int32 URsWorldMapFunctionLibrary::GetNumCollectiblesAcquiredByPlanet(const UObject* WorldContext, const FName PlanetName, const ERsWorldMapCollectableType CollectibleType) {
    return 0;
}

int32 URsWorldMapFunctionLibrary::GetNumCollectablesAcquiredForWorld(const UObject* WorldContext, const FName& WorldName, ERsWorldMapCollectableType CollectableType) {
    return 0;
}

int32 URsWorldMapFunctionLibrary::GetNumAcquiredCollectablesForRegion(const UObject* WorldContext, const FName& Region, ERsWorldMapCollectableType CollectableType) {
    return 0;
}

uint8 URsWorldMapFunctionLibrary::GetMapSectionInteriorLevel(UObject* WorldContext, const FRsMapSectionTag& MapSectionTag) {
    return 0;
}

FVector URsWorldMapFunctionLibrary::GetMapSectionCentroidPosition(UObject* WorldContext, const FRsMapSectionTag& MapSectionTag) {
    return FVector{};
}

FName URsWorldMapFunctionLibrary::GetLoaded3DMapVisLevelName(const UObject* WorldContext) {
    return NAME_None;
}

FName URsWorldMapFunctionLibrary::GetLoaded3DMapColLevelName(const UObject* WorldContext) {
    return NAME_None;
}

bool URsWorldMapFunctionLibrary::GetIsRootLevelWorldMapAutoStreamingEnabled(const UObject* WorldContext) {
    return false;
}

FName URsWorldMapFunctionLibrary::GetInteriorEnumName(const UObject* InWorldContext, const FRsMapSectionTag& InTag) {
    return NAME_None;
}

void URsWorldMapFunctionLibrary::GetIntegerState(const FRsMapStateData& Data, bool& bIsSet, int32& Integer) {
}

FLinearColor URsWorldMapFunctionLibrary::GetGeneralColor(UObject* WorldContext, ERsWorldMapGeneralColorType InType) {
    return FLinearColor{};
}

TArray<ARsWorldMapGatewayActor*> URsWorldMapFunctionLibrary::GetGatewayActorsForMapSection(UObject* WorldContext, const FRsMapSectionTag& MapSectionTag) {
    return TArray<ARsWorldMapGatewayActor*>();
}

FRsGatewayActorsPerSectionVolume URsWorldMapFunctionLibrary::GetGatewayActorsForGoal(UObject* WorldContext, const FName& GoalName) {
    return FRsGatewayActorsPerSectionVolume{};
}

TArray<uint8> URsWorldMapFunctionLibrary::GetExploredInteriorLevels(UObject* WorldContext) {
    return TArray<uint8>();
}

TArray<ARsWorldMapDoorActor*> URsWorldMapFunctionLibrary::GetDoorActorsForMapSection(UObject* WorldContext, const FRsMapSectionTag& MapSectionTag) {
    return TArray<ARsWorldMapDoorActor*>();
}

FRsMapSectionTag URsWorldMapFunctionLibrary::GetCurrentPlayerMapSection(const UObject* WorldContext) {
    return FRsMapSectionTag{};
}

FName URsWorldMapFunctionLibrary::GetCurrentlyLoadedWorldMapName(const UObject* WorldContext) {
    return NAME_None;
}

TArray<ARsWorldMapStaticMeshActor*> URsWorldMapFunctionLibrary::GetAllStaticMeshActorsOfType(UObject* WorldContext, FName MeshType) {
    return TArray<ARsWorldMapStaticMeshActor*>();
}

TArray<ARsWorldMapStateTransitionGatewayActor*> URsWorldMapFunctionLibrary::GetAllStateTransitionGatewayActors(UObject* WorldContext) {
    return TArray<ARsWorldMapStateTransitionGatewayActor*>();
}

TArray<FName> URsWorldMapFunctionLibrary::GetAllRegionNames(const UObject* WorldContext) {
    return TArray<FName>();
}

TArray<ARsWorldMapStaticMeshActor*> URsWorldMapFunctionLibrary::GetAllNonMapSectionStaticMeshActors(UObject* WorldContext) {
    return TArray<ARsWorldMapStaticMeshActor*>();
}

TArray<ARsWorldMapStaticMeshActor*> URsWorldMapFunctionLibrary::GetAllMapSectionStaticMeshActors(UObject* WorldContext) {
    return TArray<ARsWorldMapStaticMeshActor*>();
}

TArray<ARsWorldMapGatewayActor*> URsWorldMapFunctionLibrary::GetAllGatewayActorsOfType(UObject* WorldContext, FName GatewayType) {
    return TArray<ARsWorldMapGatewayActor*>();
}

TArray<ARsWorldMapGatewayActor*> URsWorldMapFunctionLibrary::GetAllGatewayActors(UObject* WorldContext) {
    return TArray<ARsWorldMapGatewayActor*>();
}

TArray<ARsWorldMapGalaxyPlanetActor*> URsWorldMapFunctionLibrary::GetAllGalaxyPlanetActor(UObject* WorldContext) {
    return TArray<ARsWorldMapGalaxyPlanetActor*>();
}

TArray<ARsWorldMapDoorActor*> URsWorldMapFunctionLibrary::GetAllDoorActorsOfType(UObject* WorldContext, FName GatewayType) {
    return TArray<ARsWorldMapDoorActor*>();
}

TArray<ARsWorldMapDoorActor*> URsWorldMapFunctionLibrary::GetAllDoorActors(UObject* WorldContext) {
    return TArray<ARsWorldMapDoorActor*>();
}

void URsWorldMapFunctionLibrary::ExploreAllMapSections(UObject* WorldContext, const FName WorldName) {
}

void URsWorldMapFunctionLibrary::EnableRootLevelWorldMapAutoStreaming(const UObject* WorldContext, bool bEnabled) {
}

void URsWorldMapFunctionLibrary::CommitNavAssistData(const UObject* WorldContext) {
}

void URsWorldMapFunctionLibrary::ApplyMapSectionColorPalette(UObject* WorldContext, const URsWorldMapColorPaletteGrouping* InGrouping, const URsWorldMapColorPalette* InPalette) {
}

void URsWorldMapFunctionLibrary::AddMapSectionToTranslationBounds(const UObject* WorldContext, const FRsMapSectionTag& MapSectionTag) {
}

URsWorldMapFunctionLibrary::URsWorldMapFunctionLibrary() {
    // Null default object.
}

