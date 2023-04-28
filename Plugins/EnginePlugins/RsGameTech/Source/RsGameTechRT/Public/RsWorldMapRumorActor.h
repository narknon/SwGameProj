#pragma once
#include "CoreMinimal.h"
#include "ERsRumorType.h"
#include "ERsWorldMapRumorVisibilityState.h"
#include "RsWorldMapActor.h"
#include "RsWorldMapRumorActor.generated.h"

class URsWorldMapUiWidgetComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ARsWorldMapRumorActor : public ARsWorldMapActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* WidgetPositioningComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsWorldMapUiWidgetComponent* WidgetComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsRumorType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RumorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BountyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWorldMapRumorVisibilityState VisibilityState;
    
    ARsWorldMapRumorActor();
    UFUNCTION(BlueprintCallable)
    void SetRumorVisibilityState(ERsWorldMapRumorVisibilityState InState, bool bAreRumorMapSectionsExplored);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetRumorVisibilityState(ERsWorldMapRumorVisibilityState InOldState, ERsWorldMapRumorVisibilityState InNewState, bool bAreRumorMapSectionsExplored);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRumorUpdate(float InRadiusScale, ERsWorldMapRumorVisibilityState InVisibilityState);
    
};

