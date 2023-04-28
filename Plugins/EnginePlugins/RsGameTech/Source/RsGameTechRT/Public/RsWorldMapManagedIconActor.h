#pragma once
#include "CoreMinimal.h"
#include "Rs/RsMapSectionTag.h"
#include "ERsWorldMapManagedIconType.h"
#include "RsWorldMapActor.h"
#include "RsWorldMapManagedIconActor.generated.h"

class URsWorldMapUiWidgetComponent;

UCLASS(Blueprintable)
class ARsWorldMapManagedIconActor : public ARsWorldMapActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsWorldMapUiWidgetComponent* WorldMapWidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsMapSectionTag MapSectionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWorldMapManagedIconType Type;
    
    ARsWorldMapManagedIconActor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsMapSectionTag GetMapSectionTag() const;
    
};

