#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapWidgetFilterType.h"
#include "RsUiScreenSpaceWidgetComponent.h"
#include "RsWorldMapLODOptions.h"
#include "RsWorldMapWorldStateLODData.h"
#include "RsWorldMapUiWidgetComponent.generated.h"

class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsWorldMapUiWidgetComponent : public URsUiScreenSpaceWidgetComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseWorldState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapWorldStateLODData WorldState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCachedIsWorldStateMet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCheckElevationLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUseLODOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapLODOptions LODOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWorldMapWidgetFilterType FilterType;
    
public:
    URsWorldMapUiWidgetComponent();
    UFUNCTION(BlueprintCallable)
    void SetWidgetTexture(UTexture2D* InTexture);
    
};

