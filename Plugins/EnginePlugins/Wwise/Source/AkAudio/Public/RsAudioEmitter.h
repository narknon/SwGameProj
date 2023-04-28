#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RsWorldStateQuery.h"
#include "RsAudioEmitter.generated.h"

class AVolume;
class UAkComponent;

UCLASS(Blueprintable)
class ARsAudioEmitter : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowVirtualVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVolume* Volume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldStateQuery WorldStateQuery;
    
    ARsAudioEmitter();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StopSound();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StartSound();
    
};

