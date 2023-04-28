#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "RsMapSectionTag.h"
#include "ERsHolomapMode.h"
#include "ERsHolomapState.h"
#include "ERsWorldMapLevelType.h"
#include "ERsWorldMapManagedIconType.h"
#include "ERsWorldMapOffsetType.h"
#include "ERsWorldMapRequestOpenContext.h"
#include "ERsWorldMapWidgetFilterType.h"
#include "RsBitfield_WorldMapWidgetFilterType.h"
#include "RsWorldMapBreadCrumbRingBuffer.h"
#include "RsWorldMapHologramBase.h"
#include "RsWorldMapLevelLoadedFailedDelegate.h"
#include "RsWorldMapLevelLoadedSucceededDelegate.h"
#include "SwDeferredSwitchWorldMapLevel.h"
#include "SwWorldMapHologramHoverOverExploredMapSectionsDelegateDelegate.h"
#include "SwWorldMapInputs.h"
#include "SwWorldMapInstantOpenData.h"
#include "SwWorldMapOnPlayerMapSectionChangedDelegate.h"
#include "SwWorldMapOnPrepareCloseDelegate.h"
#include "SwWorldMapOnPrepareOpenDelegate.h"
#include "SwWorldMapRayCastResultData.h"
#include "SwWorldMapHologramBase.generated.h"

class AActor;
class ARsCameraManager;
class ARsWorldMapBeacon;
class ASwWorldMapCameraActor;
class ASwWorldMapHologramBase;
class UAkAudioEvent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMaterialParameterCollection;
class UObject;
class UPostProcessComponent;
class URsCameraModeDefinition;
class URsStickInputProcessingData;
class URsWorldMap;
class URsWorldMapLineBatchComponent;
class URsWorldMapStaticMeshComponent;
class USceneComponent;
class UStaticMesh;
class USwFastTravelSectorMapComponent;
class USwGalaxyMapComponent;
class USwInteriorMapComponent;
class USwLocalMapComponent;
class USwSectorMapComponent;
class USwWorldMapComponent;
class USwWorldMapHologramSettings;
class USwWorldMapIndicatorComponent;
class USwWorldMapRumorComponent;
class UTimelineComponent;
class UWorld;

UCLASS(Abstract, Blueprintable)
class ASwWorldMapHologramBase : public ARsWorldMapHologramBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwWorldMapOnPlayerMapSectionChanged OnPlayerMapSectionChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwWorldMapOnPrepareOpen OnPrepareOpen;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwWorldMapOnPrepareClose OnPrepareClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwWorldMapHologramSettings* RuntimeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> LocationMarkerStaticMeshPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> LocationMarkerMaterialPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> HologramMaskMeshPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> HologramMaskMaterialPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* PostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsWorldMapLineBatchComponent* LineBatchComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsWorldMapStaticMeshComponent* HologramMaskMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USwWorldMapIndicatorComponent* LocationMarkerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* TransformTimelineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USwGalaxyMapComponent* GalaxyMapComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USwLocalMapComponent* LocalMapComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USwSectorMapComponent* SectorMapComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USwInteriorMapComponent* InteriorMapComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USwFastTravelSectorMapComponent* FastTravelSectorMapComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USwWorldMapRumorComponent* RumorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* PerPlanetCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* HologramConeActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASwWorldMapCameraActor* CameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSwWorldMapInputs Inputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEvent_MapOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEvent_MapClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEvent_MapRegionSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEvent_SnapToPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEvent_PeriodicDistortion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEvent_InteriorLevelChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMapZooming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HolomapCenterLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARsCameraManager* PlayerCameraManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsMapSectionTag SelectedMapSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockstepMovementThroughGateways;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockstep3DTargeting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USwWorldMapComponent* CurrentWorldMapComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USwWorldMapComponent* NextWorldMapComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USwWorldMapComponent* PreviousWorldMapComponent;
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USwWorldMapComponent* WorldMapComponents[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSwWorldMapInstantOpenData PauseMenuOpenData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSwWorldMapInstantOpenData InstantOpenData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DebugUIMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsStickInputProcessingData* InputProcessingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapBreadCrumbRingBuffer CurrentBreadCrumbBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwDeferredSwitchWorldMapLevel DeferredSwitchWorldMapLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSwWorldMapRayCastResultData> TempRayCastResults;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwWorldMapHologramHoverOverExploredMapSectionsDelegate OnHoverOverExploredMapSections;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* WorldMapTransformRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWorldMapOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsHolomapState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWorldMapOffsetType OffsetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsWorldMap* RsWorldMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsHolomapMode HolomapMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* HologramCompositeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* PlayerArrowStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PlayerArrowMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* HologramMaskMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* HologramMaskMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsBitfield_WorldMapWidgetFilterType WidgetFilters;
    
public:
    ASwWorldMapHologramBase();
    UFUNCTION(BlueprintCallable)
    void UntrackRumor(FName RumorName);
    
    UFUNCTION(BlueprintCallable)
    void UntrackBounty(FName RumorName);
    
    UFUNCTION(BlueprintCallable)
    void UnloadWorldMapOutsideOfOpen();
    
    UFUNCTION(BlueprintCallable)
    void TransitionCameraToSphericalCoordinates();
    
    UFUNCTION(BlueprintCallable)
    void TransitionCameraToSceneCoordinates();
    
    UFUNCTION(BlueprintCallable)
    void TrackRumor(FName RumorName);
    
    UFUNCTION(BlueprintCallable)
    void TrackBounty(FName RumorName);
    
    UFUNCTION(BlueprintCallable)
    bool SwitchWorldMapLevel(FName InPlanetName, ERsWorldMapLevelType InLevelType, const FRsWorldMapLevelLoadedSucceeded& OnLevelLoadSuccess, const FRsWorldMapLevelLoadedFailed& OnLevelLoadFailure);
    
    UFUNCTION(BlueprintCallable)
    bool SwitchToInteriorMap(FName InInteriorName);
    
    UFUNCTION(BlueprintCallable)
    void SwitchFromInteriorMap();
    
    UFUNCTION(BlueprintCallable)
    void SnapToFocus(bool bFinalizeTransform, bool bIsImmediate);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetWidgetFilters(FRsBitfield_WorldMapWidgetFilterType InFilters);
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetFilter(ERsWorldMapWidgetFilterType FilterType, bool bIsSet);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetOpenHolomapRotation(FRotator InHolomapRotation, bool bInShouldNegateWorldRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetOpenHolomapFocusLocation(FVector InHolomapFocusLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetMaskLocation(FVector Position);
    
    UFUNCTION(BlueprintCallable)
    void SetMapSectionUnexplored(FRsMapSectionTag InMapSection);
    
    UFUNCTION(BlueprintCallable)
    void SetMapSectionStatusColor(const FRsMapSectionTag& MapSectionTag, const FLinearColor& InLinearColor);
    
    UFUNCTION(BlueprintCallable)
    void SetMapSectionObjective(const FRsMapSectionTag& MapSectionTag, bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMapSectionExplored(FRsMapSectionTag InMapSection);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetManagedIconActorVisibility(ERsWorldMapManagedIconType InType, bool bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetManagedIconActorPosition(ERsWorldMapManagedIconType InType, FVector InActorPosition);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCurrentHitMapSection(FRsMapSectionTag InNewTag);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetActiveRouteLine(FName InStartPlanet, FName InEndPlanet);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetActiveInteriorLevel(uint8 InteriorLevel, bool bApplyInteriorLevelTranslation);
    
    UFUNCTION(BlueprintCallable)
    void SaveWorldMapStateForPauseMenu();
    
    UFUNCTION(BlueprintCallable)
    void ResetTransforms(bool bFinalizeTransform);
    
    UFUNCTION(BlueprintCallable)
    void RequestWorldMapOpenRoamingWithOverrides(FName InPlanetPlayerIsAt, FVector InHolomapFocusLocation, float InInitialZoomRadius, FRsMapSectionTag InOpeningMapSection, ERsWorldMapRequestOpenContext InContext, bool bShouldAllowOpeningOfInteriorMap);
    
    UFUNCTION(BlueprintCallable)
    void RequestWorldMapOpenRoaming(FName InPlanetPlayerIsAt);
    
    UFUNCTION(BlueprintCallable)
    void RequestWorldMapOpenImmediate(FName InPlanetPlayerIsAt);
    
    UFUNCTION(BlueprintCallable)
    void RequestWorldMapOpenHolotableInteractive(FName InPlanetPlayerIsAt, FVector InWorldPosition, FRotator InWorldRotation);
    
    UFUNCTION(BlueprintCallable)
    void RequestWorldMapOpenFromPauseMenu(FName InPlanetPlayerIsAt);
    
    UFUNCTION(BlueprintCallable)
    void RequestWorldMapOpen_FastTravel(FName InPlanetPlayerIsAt);
    
    UFUNCTION(BlueprintCallable)
    void RequestWorldMapClose(bool bShouldProcessClosingLoads);
    
private:
    UFUNCTION(BlueprintCallable)
    static void RefreshGeneralColors(UObject* InContext, USwWorldMapHologramSettings* InRuntimeSettings);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveWorldMapOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveWorldMapLevelChanged(const FName& WorldMapName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveWorldMapClosed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSecretMapSectionExplored(const FRsMapSectionTag& MapSection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveRuntimeSettingsChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveRegionSelectionChanged(const FName& RegionName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnCameraModeCompletion(URsCameraModeDefinition* ModeDefinition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveMapTranslationFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveMapSnappedToPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveMapSectionSelectionChanged(const FRsMapSectionTag& NewMapSection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveMapSectionExplored(const FRsMapSectionTag& MapSection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveMapNavigationModeChange(bool bIsFreeTranslationMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveInteriorLevelHoverEnd(uint8 InteriorLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveInteriorLevelHoverBegin(uint8 InteriorLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveInteriorLevelChanged(uint8 NewInteriorLevel);
    
    UFUNCTION(BlueprintCallable)
    void RayTraceWorldMap(UWorld* InWorld, bool bOnlyActiveInteriorLayer, bool bShouldDrawDebug);
    
    UFUNCTION(BlueprintCallable)
    void PlaySequence(FName SequenceName);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSetElevationLevel(ERsWorldMapLevelType InLevelType, uint8 InElevationLevel);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCameraOpeningFinished();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCameraModeCompletion(URsCameraModeDefinition* CameraModeDefinition);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnApplyRuntimeSettingsChanges();
    
    UFUNCTION(BlueprintCallable)
    void LoadWorldMapOutsideOfOpen(FName InPlanetName, const FRsWorldMapLevelLoadedSucceeded& OnLevelLoadSuccess, const FRsWorldMapLevelLoadedFailed& OnLevelLoadFailure);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWidgetFilterSet(ERsWorldMapWidgetFilterType FilterType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsOnMantis() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMapSectionObjective(const FRsMapSectionTag& MapSectionTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInTransition() const;
    
    UFUNCTION(BlueprintCallable)
    void IncrementalExplore();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetZoomDelta();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetWorldMapTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWorldMapScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetWorldMapRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ARsWorldMapBeacon*> GetWorldMapDataOwnerBeaconsArray();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static ASwWorldMapHologramBase* GetSwWorldMapActor(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRelativeHolomapCenterOffset(const FRotator& PlayerRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsWorldMapLevelType GetLevelType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLastRayTraceData(FVector& OutPosition, bool& bOutIsValid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetInteriorOfPlayer() const;
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentZoomSettings(float& OutMinZoom, float& OutMaxZoom, float& OutCurrentZoom);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsBitfield_WorldMapWidgetFilterType GetCurrentWidgetFilters();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsMapSectionTag GetCurrentHitMapSection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FName> GetActiveRumors();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FName> GetActiveBounties();
    
    UFUNCTION(BlueprintCallable)
    void FinalizeTransform();
    
    UFUNCTION(BlueprintCallable)
    void EnableInputTranslation(bool bEnableInputTranslation);
    
    UFUNCTION(BlueprintCallable)
    void EnableInputTransforms(bool bEnableInputTransforms);
    
    UFUNCTION(BlueprintCallable)
    void EnableInputScale(bool bEnableInputScale);
    
    UFUNCTION(BlueprintCallable)
    void EnableInputRotation(bool bEnableInputRotation);
    
    UFUNCTION(BlueprintCallable)
    void ClearRawInput();
    
private:
    UFUNCTION(BlueprintCallable)
    void ClearBreadCrumbs();
    
};

