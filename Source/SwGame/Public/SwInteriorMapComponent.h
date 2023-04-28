#pragma once
#include "CoreMinimal.h"
#include "RsMapSectionTag.h"
#include "SwInteriorMapOnMapSectionChangedDelegate.h"
#include "SwWorldMapCameraFocusData.h"
#include "SwWorldMapComponent.h"
#include "SwInteriorMapComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SWGAME_API USwInteriorMapComponent : public USwWorldMapComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwWorldMapCameraFocusData FocusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsMapSectionTag CurrentHitMapSection;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwInteriorMapOnMapSectionChanged OnMapSectionChanged;
    
    USwInteriorMapComponent();
};

