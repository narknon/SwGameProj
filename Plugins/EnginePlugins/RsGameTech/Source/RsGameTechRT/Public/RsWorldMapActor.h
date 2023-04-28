#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ERsWorldMapActorType.h"
#include "ERsWorldMapLevelType.h"
#include "ERsWorldMapPIPrimaryPriorityBucket.h"
#include "ERsWorldMapPISecondaryPriority.h"
#include "RsPropertyInspectorData.h"
#include "RsWorldMapLODLevelData.h"
#include "RsWorldMapActor.generated.h"

class URsWorldMapUiWidgetComponent;

UCLASS(Blueprintable)
class ARsWorldMapActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StaticLayerOverride;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SectorMapElevationLevelBits;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LocalMapElevationLevelBits;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 InteriorMapElevationLevelBits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentLODLevel;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWorldMapActorType WorldMapActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepOnStaticLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasWorldMapLODs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverridesDefaultLODs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPropertyInspectableOnAllElevationLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPropertyInspectorData PropertyInspectorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsWorldMapLODLevelData> OverridenLODLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URsWorldMapUiWidgetComponent*> WidgetComponents;
    
    ARsWorldMapActor();
    UFUNCTION(BlueprintCallable)
    void SetWorldMapVisibility_Blueprint(bool bInIsVisible, ERsWorldMapLevelType InWorldMapLevelType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVisible();
    
    UFUNCTION(BlueprintCallable)
    void SetOverridePropertyInspectorSecondaryPriority(ERsWorldMapPISecondaryPriority InSecondaryPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetOverridePropertyInspectorPrimaryPriority(ERsWorldMapPIPrimaryPriorityBucket InPrimaryPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetOverridePropertyInspectorDescriptionRow(FName InDescriptionRow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveWorldMapBeginPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWorldMapLODChanged(int32 InPreviousLOD, int32 InNewLOD, bool bInIsFromOpenOrLoad);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPropertInspectorUnfocus_Blueprint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPropertInspectorFocus_Blueprint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsWorldMapPIPrimaryPriorityBucket GetPropertyInspectorPrimaryPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPropertyInspectorDescriptionRow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsWorldMapPISecondaryPriority GetPrimaryInspectorSecondaryPriority() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearOverridePropertyInspectorSecondaryPriority();
    
    UFUNCTION(BlueprintCallable)
    void ClearOverridePropertyInspectorPrimaryPriority();
    
    UFUNCTION(BlueprintCallable)
    void ClearOverridePropertyInspectorDescriptionRow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyRuntimeSettings();
    
};

