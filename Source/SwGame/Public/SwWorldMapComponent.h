#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ERsWorldMapLevelType.h"
#include "SwWorldMapOnElevationLevelChangedDelegate.h"
#include "SwWorldMapOnEndTransitionToDelegate.h"
#include "SwWorldMapOnPropertyInspectorTargetChangedDelegate.h"
#include "SwWorldMapOnStartLoadingTransitionToDelegate.h"
#include "SwWorldMapOnStartTransitionToDelegate.h"
#include "SwWorldMapComponent.generated.h"

class ASwWorldMapCameraActor;
class URsWorldMap;
class USwWorldMapHologramSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwWorldMapComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoverDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsWorldMap* RsWorldMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASwWorldMapCameraActor* CameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwWorldMapHologramSettings* RuntimeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWorldMapLevelType HierarchyLevelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanTransitionHeightOnElevationChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwWorldMapOnElevationLevelChanged OnElevationLevelChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwWorldMapOnPropertyInspectorTargetChanged OnPropertyInspectorTargetChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwWorldMapOnStartLoadingTransitionTo OnStartLoadingTransitionTo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwWorldMapOnStartLoadingTransitionTo OnEndLoadingTransitionTo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwWorldMapOnStartTransitionTo OnStartTransitionTo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwWorldMapOnEndTransitionTo OnEndTransitionTo;
    
    USwWorldMapComponent();
};

