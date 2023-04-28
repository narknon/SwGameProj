#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Rs/RsMapSectionTag.h"
#include "Rs/RsWorldMapActorSectorName.h"
#include "RsWorldMapActor.h"
#include "RsWorldMapSectorActor.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class ARsWorldMapSectorActor : public ARsWorldMapActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapActorSectorName SectorEnum;
    
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
    ARsWorldMapSectorActor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSectorEnumName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsMapSectionTag GetMapSectionTag() const;
    
};

