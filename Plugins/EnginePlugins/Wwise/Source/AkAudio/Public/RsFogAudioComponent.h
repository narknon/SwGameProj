#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AkAutoRadialComponent.h"
#include "RsFogAudioComponent.generated.h"

class UBoxComponent;
class URsAudioPolyComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsFogAudioComponent : public UAkAutoRadialComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsAudioPolyComponent* RsAudioPolyComponent;
    
    URsFogAudioComponent();
    UFUNCTION(BlueprintCallable)
    void SetVolumeReference(UBoxComponent* InBoxComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerInVolume(bool InIsInVolume);
    
    UFUNCTION(BlueprintCallable)
    void RsTickFogAudioComponent(const FVector& ListenerPosition);
    
};

