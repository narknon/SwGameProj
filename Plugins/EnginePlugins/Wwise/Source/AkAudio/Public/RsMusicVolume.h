#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "QueryForMusic.h"
#include "RsMusicVolume.generated.h"

class UAkAudioEvent;
class URsMusicVolumeComponent;

UCLASS(Blueprintable)
class ARsMusicVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQueryForMusic> QueryConditionalMusics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsMusicVolumeComponent* MusicVolumeComponent;
    
    ARsMusicVolume();
};

