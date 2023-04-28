#pragma once
#include "CoreMinimal.h"
#include "Rs/RsMapSectionTag.h"
#include "SwLocalMapOnMapSectionChangedDelegate.h"
#include "SwWorldMapCameraFocusData.h"
#include "SwWorldMapComponent.h"
#include "SwLocalMapComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwLocalMapComponent : public USwWorldMapComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwWorldMapCameraFocusData FocusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsMapSectionTag CurrentHitMapSection;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwLocalMapOnMapSectionChanged OnMapSectionChanged;
    
    USwLocalMapComponent();
};

