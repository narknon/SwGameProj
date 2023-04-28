#pragma once
#include "CoreMinimal.h"
#include "RsHeroComponent.h"
#include "SwForcePingResults.h"
#include "SwAccessibilityComponent.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwAccessibilityComponent : public URsHeroComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HintPingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUseRaytracedOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HintPingOcclusionCheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHintPingOcclusionChecksPerFrame;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HintPingAudio[9];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* InteractedPingAudio[9];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* InteractedFailureAudio;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AvailablePingAudio[9];
    
public:
    USwAccessibilityComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPingEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FSwForcePingResults> GetForcePingDataWithinRange(float InDistance);
    
};

