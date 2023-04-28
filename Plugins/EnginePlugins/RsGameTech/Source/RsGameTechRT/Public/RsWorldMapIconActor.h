#pragma once
#include "CoreMinimal.h"
#include "Rs/RsMapSectionTag.h"
#include "RsWorldMapActor.h"
#include "RsWorldMapIconActor.generated.h"

class URsWorldMapUiWidgetComponent;

UCLASS(Blueprintable)
class ARsWorldMapIconActor : public ARsWorldMapActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsWorldMapUiWidgetComponent* WorldMapWidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsMapSectionTag MapSectionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceNear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFar;
    
    ARsWorldMapIconActor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsMapSectionTag GetMapSectionTag() const;
    
};

