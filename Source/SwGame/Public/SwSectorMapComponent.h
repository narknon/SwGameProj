#pragma once
#include "CoreMinimal.h"
#include "Rs/RsMapSectionTag.h"
#include "SwPlanetMapOnSectorHoverEnterDelegate.h"
#include "SwPlanetMapOnSectorHoverExitDelegate.h"
#include "SwSectorMapOnMapSectionChangedDelegate.h"
#include "SwSectorMapOnSectorChangedDelegate.h"
#include "SwWorldMapCameraFocusData.h"
#include "SwWorldMapComponent.h"
#include "SwSectorMapComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwSectorMapComponent : public USwWorldMapComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwWorldMapCameraFocusData FocusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsMapSectionTag CurrentHitMapSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentHitSector;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwPlanetMapOnSectorHoverEnter OnSectorHoverEnter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwPlanetMapOnSectorHoverExit OnSectorHoverExit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSectorMapOnSectorChanged OnSectorChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSectorMapOnMapSectionChanged OnMapSectionChanged;
    
    USwSectorMapComponent();
};

