#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ERsWorldMapInterpolationTrackType.h"
#include "ERsWorldMapInterpolationType.h"
#include "INT_RsWorldMapInterpolator.generated.h"

UINTERFACE(Blueprintable)
class UINT_RsWorldMapInterpolator : public UInterface {
    GENERATED_BODY()
};

class IINT_RsWorldMapInterpolator : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartInterpolation_Blueprint(const ERsWorldMapInterpolationType InterpolationType, const ERsWorldMapInterpolationTrackType TrackType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInterpolate_Blueprint(const ERsWorldMapInterpolationType InterpolationType, const ERsWorldMapInterpolationTrackType TrackType, const float InterpolationValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndInterpolation_Blueprint(const ERsWorldMapInterpolationType InterpolationType, const ERsWorldMapInterpolationTrackType TrackType);
    
};

