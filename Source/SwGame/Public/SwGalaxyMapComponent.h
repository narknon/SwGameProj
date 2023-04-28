#pragma once
#include "CoreMinimal.h"
#include "RsMapSectionTag.h"
#include "SwGalaxyMapOnMapSectionChangedDelegate.h"
#include "SwGalaxyMapOnPlanetHoverEnterDelegate.h"
#include "SwGalaxyMapOnPlanetHoverExitDelegate.h"
#include "SwGalaxyMapOnSectorHoverEnterDelegate.h"
#include "SwGalaxyMapOnSectorHoverExitDelegate.h"
#include "SwWorldMapCameraFocusData.h"
#include "SwWorldMapComponent.h"
#include "SwGalaxyMapComponent.generated.h"

class ARsWorldMapGalaxyPlanetActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SWGAME_API USwGalaxyMapComponent : public USwWorldMapComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwGalaxyMapOnPlanetHoverEnter OnPlanetHoverEnter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwGalaxyMapOnPlanetHoverExit OnPlanetHoverExit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwGalaxyMapOnMapSectionChanged OnMapSectionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwGalaxyMapOnSectorHoverEnter OnSectorHoverEnter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwGalaxyMapOnSectorHoverExit OnSectorHoverExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwWorldMapCameraFocusData FocusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsMapSectionTag CurrentHitMapSection;
    
    USwGalaxyMapComponent();
protected:
    UFUNCTION(BlueprintCallable)
    bool SetCameraFocusToPlanet(const FName PlanetName, bool bInIsImmediate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARsWorldMapGalaxyPlanetActor* GetCurrentPlanetActor() const;
    
};

