#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AkAmbientSound.generated.h"

class AVolume;
class UAkComponent;

UCLASS(Blueprintable)
class AAkAmbientSound : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVolume* Volume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnExitAttenuationFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StopWhenOwnerIsDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoPost;
    
    AAkAmbientSound();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StopAmbientSound();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StartAmbientSound();
    
};

