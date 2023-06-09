#include "SwWorldMapHologramBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessComponent -FallbackName=PostProcessComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=RsGameTechRT -ObjectName=RsWorldMapLineBatchComponent -FallbackName=RsWorldMapLineBatchComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=RsGameTechRT -ObjectName=RsWorldMapStaticMeshComponent -FallbackName=RsWorldMapStaticMeshComponent
#include "RsWorldMapLineBatchComponent.h"
#include "RsWorldMapStaticMeshComponent.h"
#include "SwFastTravelSectorMapComponent.h"
#include "SwGalaxyMapComponent.h"
#include "SwInteriorMapComponent.h"
#include "SwLocalMapComponent.h"
#include "SwSectorMapComponent.h"
#include "SwWorldMapRumorComponent.h"
#include "Components/PostProcessComponent.h"

void ASwWorldMapHologramBase::UntrackRumor(FName RumorName) {
}

void ASwWorldMapHologramBase::UntrackBounty(FName RumorName) {
}

void ASwWorldMapHologramBase::UnloadWorldMapOutsideOfOpen() {
}

void ASwWorldMapHologramBase::TransitionCameraToSphericalCoordinates() {
}

void ASwWorldMapHologramBase::TransitionCameraToSceneCoordinates() {
}

void ASwWorldMapHologramBase::TrackRumor(FName RumorName) {
}

void ASwWorldMapHologramBase::TrackBounty(FName RumorName) {
}

bool ASwWorldMapHologramBase::SwitchWorldMapLevel(FName InPlanetName, ERsWorldMapLevelType InLevelType, const FRsWorldMapLevelLoadedSucceeded& OnLevelLoadSuccess, const FRsWorldMapLevelLoadedFailed& OnLevelLoadFailure) {
    return false;
}

bool ASwWorldMapHologramBase::SwitchToInteriorMap(FName InInteriorName) {
    return false;
}

void ASwWorldMapHologramBase::SwitchFromInteriorMap() {
}

void ASwWorldMapHologramBase::SnapToFocus(bool bFinalizeTransform, bool bIsImmediate) {
}

void ASwWorldMapHologramBase::SetWidgetFilters(FRsBitfield_WorldMapWidgetFilterType InFilters) {
}

void ASwWorldMapHologramBase::SetWidgetFilter(ERsWorldMapWidgetFilterType FilterType, bool bIsSet) {
}

void ASwWorldMapHologramBase::SetOpenHolomapRotation(FRotator InHolomapRotation, bool bInShouldNegateWorldRotation) {
}

void ASwWorldMapHologramBase::SetOpenHolomapFocusLocation(FVector InHolomapFocusLocation) {
}

void ASwWorldMapHologramBase::SetMaskLocation(FVector Position) {
}

void ASwWorldMapHologramBase::SetMapSectionUnexplored(FRsMapSectionTag InMapSection) {
}

void ASwWorldMapHologramBase::SetMapSectionStatusColor(const FRsMapSectionTag& MapSectionTag, const FLinearColor& InLinearColor) {
}

void ASwWorldMapHologramBase::SetMapSectionObjective(const FRsMapSectionTag& MapSectionTag, bool bValue) {
}

void ASwWorldMapHologramBase::SetMapSectionExplored(FRsMapSectionTag InMapSection) {
}

void ASwWorldMapHologramBase::SetManagedIconActorVisibility(ERsWorldMapManagedIconType InType, bool bIsVisible) {
}

void ASwWorldMapHologramBase::SetManagedIconActorPosition(ERsWorldMapManagedIconType InType, FVector InActorPosition) {
}

void ASwWorldMapHologramBase::SetCurrentHitMapSection(FRsMapSectionTag InNewTag) {
}

void ASwWorldMapHologramBase::SetActiveRouteLine(FName InStartPlanet, FName InEndPlanet) {
}

void ASwWorldMapHologramBase::SetActiveInteriorLevel(uint8 InteriorLevel, bool bApplyInteriorLevelTranslation) {
}

void ASwWorldMapHologramBase::SaveWorldMapStateForPauseMenu() {
}

void ASwWorldMapHologramBase::ResetTransforms(bool bFinalizeTransform) {
}

void ASwWorldMapHologramBase::RequestWorldMapOpenRoamingWithOverrides(FName InPlanetPlayerIsAt, FVector InHolomapFocusLocation, float InInitialZoomRadius, FRsMapSectionTag InOpeningMapSection, ERsWorldMapRequestOpenContext InContext, bool bShouldAllowOpeningOfInteriorMap) {
}

void ASwWorldMapHologramBase::RequestWorldMapOpenRoaming(FName InPlanetPlayerIsAt) {
}

void ASwWorldMapHologramBase::RequestWorldMapOpenImmediate(FName InPlanetPlayerIsAt) {
}

void ASwWorldMapHologramBase::RequestWorldMapOpenHolotableInteractive(FName InPlanetPlayerIsAt, FVector InWorldPosition, FRotator InWorldRotation) {
}

void ASwWorldMapHologramBase::RequestWorldMapOpenFromPauseMenu(FName InPlanetPlayerIsAt) {
}

void ASwWorldMapHologramBase::RequestWorldMapOpen_FastTravel(FName InPlanetPlayerIsAt) {
}

void ASwWorldMapHologramBase::RequestWorldMapClose(bool bShouldProcessClosingLoads) {
}

void ASwWorldMapHologramBase::RefreshGeneralColors(UObject* InContext, USwWorldMapHologramSettings* InRuntimeSettings) {
}
















void ASwWorldMapHologramBase::RayTraceWorldMap(UWorld* InWorld, bool bOnlyActiveInteriorLayer, bool bShouldDrawDebug) {
}

void ASwWorldMapHologramBase::PlaySequence(FName SequenceName) {
}

void ASwWorldMapHologramBase::OnSetElevationLevel(ERsWorldMapLevelType InLevelType, uint8 InElevationLevel) {
}

void ASwWorldMapHologramBase::OnCameraOpeningFinished() {
}

void ASwWorldMapHologramBase::OnCameraModeCompletion(URsCameraModeDefinition* CameraModeDefinition) {
}


void ASwWorldMapHologramBase::LoadWorldMapOutsideOfOpen(FName InPlanetName, const FRsWorldMapLevelLoadedSucceeded& OnLevelLoadSuccess, const FRsWorldMapLevelLoadedFailed& OnLevelLoadFailure) {
}

bool ASwWorldMapHologramBase::IsWidgetFilterSet(ERsWorldMapWidgetFilterType FilterType) {
    return false;
}


bool ASwWorldMapHologramBase::IsMapSectionObjective(const FRsMapSectionTag& MapSectionTag) const {
    return false;
}

bool ASwWorldMapHologramBase::IsInTransition() const {
    return false;
}

void ASwWorldMapHologramBase::IncrementalExplore() {
}

float ASwWorldMapHologramBase::GetZoomDelta() {
    return 0.0f;
}

FTransform ASwWorldMapHologramBase::GetWorldMapTransform() const {
    return FTransform{};
}

float ASwWorldMapHologramBase::GetWorldMapScale() const {
    return 0.0f;
}

FRotator ASwWorldMapHologramBase::GetWorldMapRotation() const {
    return FRotator{};
}

TArray<ARsWorldMapBeacon*> ASwWorldMapHologramBase::GetWorldMapDataOwnerBeaconsArray() {
    return TArray<ARsWorldMapBeacon*>();
}

ASwWorldMapHologramBase* ASwWorldMapHologramBase::GetSwWorldMapActor(UObject* WorldContext) {
    return NULL;
}

FVector ASwWorldMapHologramBase::GetRelativeHolomapCenterOffset(const FRotator& PlayerRotation) const {
    return FVector{};
}

ERsWorldMapLevelType ASwWorldMapHologramBase::GetLevelType() const {
    return ERsWorldMapLevelType::Interior;
}

void ASwWorldMapHologramBase::GetLastRayTraceData(FVector& OutPosition, bool& bOutIsValid) const {
}

FName ASwWorldMapHologramBase::GetInteriorOfPlayer() const {
    return NAME_None;
}

void ASwWorldMapHologramBase::GetCurrentZoomSettings(float& OutMinZoom, float& OutMaxZoom, float& OutCurrentZoom) {
}

FRsBitfield_WorldMapWidgetFilterType ASwWorldMapHologramBase::GetCurrentWidgetFilters() {
    return FRsBitfield_WorldMapWidgetFilterType{};
}

FRsMapSectionTag ASwWorldMapHologramBase::GetCurrentHitMapSection() const {
    return FRsMapSectionTag{};
}



void ASwWorldMapHologramBase::FinalizeTransform() {
}

void ASwWorldMapHologramBase::EnableInputTranslation(bool bEnableInputTranslation) {
}

void ASwWorldMapHologramBase::EnableInputTransforms(bool bEnableInputTransforms) {
}

void ASwWorldMapHologramBase::EnableInputScale(bool bEnableInputScale) {
}

void ASwWorldMapHologramBase::EnableInputRotation(bool bEnableInputRotation) {
}

void ASwWorldMapHologramBase::ClearRawInput() {
}

void ASwWorldMapHologramBase::ClearBreadCrumbs() {
}

ASwWorldMapHologramBase::ASwWorldMapHologramBase() {
    this->PostProcess = CreateDefaultSubobject<UPostProcessComponent>(TEXT("WorldMapPostProcess"));
    this->LineBatchComponent = CreateDefaultSubobject<URsWorldMapLineBatchComponent>(TEXT("LineBatchComponent"));
    this->HologramMaskMeshComponent = CreateDefaultSubobject<URsWorldMapStaticMeshComponent>(TEXT("HologramMaskMesh"));
    this->LocationMarkerComponent = NULL;
    this->TransformTimelineComponent = NULL;
    this->GalaxyMapComponent = CreateDefaultSubobject<USwGalaxyMapComponent>(TEXT("GalaxyMap"));
    this->LocalMapComponent = CreateDefaultSubobject<USwLocalMapComponent>(TEXT("LocalMap"));
    this->SectorMapComponent = CreateDefaultSubobject<USwSectorMapComponent>(TEXT("SectorMap"));
    this->InteriorMapComponent = CreateDefaultSubobject<USwInteriorMapComponent>(TEXT("InteriorMap"));
    this->FastTravelSectorMapComponent = CreateDefaultSubobject<USwFastTravelSectorMapComponent>(TEXT("FastTravelMap"));
    this->RumorComponent = CreateDefaultSubobject<USwWorldMapRumorComponent>(TEXT("RumorComponent"));
    this->PerPlanetCollection = NULL;
    this->HologramConeActor = NULL;
    this->CameraActor = NULL;
    this->AudioEvent_MapOpen = NULL;
    this->AudioEvent_MapClose = NULL;
    this->AudioEvent_MapRegionSelect = NULL;
    this->AudioEvent_SnapToPosition = NULL;
    this->AudioEvent_PeriodicDistortion = NULL;
    this->AudioEvent_InteriorLevelChanged = NULL;
    this->bIsMapZooming = false;
    this->PlayerCameraManager = NULL;
    this->bLockstepMovementThroughGateways = false;
    this->bLockstep3DTargeting = false;
    this->CurrentWorldMapComponent = NULL;
    this->NextWorldMapComponent = NULL;
    this->PreviousWorldMapComponent = NULL;
    this->WorldMapComponents[0] = NULL;
    this->WorldMapComponents[1] = NULL;
    this->WorldMapComponents[2] = NULL;
    this->WorldMapComponents[3] = NULL;
    this->WorldMapComponents[4] = NULL;
    this->DebugUIMaterial = NULL;
    this->InputProcessingData = NULL;
    this->WorldMapTransformRoot = CreateDefaultSubobject<USceneComponent>(TEXT("WorldMapTransformRoot"));
    this->bIsWorldMapOpen = false;
    this->State = ERsHolomapState::Closed;
    this->OffsetType = ERsWorldMapOffsetType::Default;
    this->RsWorldMap = NULL;
    this->HolomapMode = ERsHolomapMode::Roaming;
    this->HologramCompositeMaterial = NULL;
    this->PlayerArrowStaticMesh = NULL;
    this->PlayerArrowMaterial = NULL;
    this->HologramMaskMesh = NULL;
    this->HologramMaskMaterial = NULL;
}

