#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Rs/RsMapSectionTag.h"
#include "RsWorldMapActor.h"
#include "RsWorldMapGalaxyPlanetActor.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class ARsWorldMapGalaxyPlanetActor : public ARsWorldMapActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlanetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsMapSectionTag MapSectionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HoveredScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Scale_Enter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Scale_Exit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NonHoveredScale;
    
public:
    ARsWorldMapGalaxyPlanetActor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPlanetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsMapSectionTag GetMapSectionTag() const;
    
};

