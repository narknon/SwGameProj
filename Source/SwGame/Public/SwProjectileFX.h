#pragma once
#include "CoreMinimal.h"
#include "SwProjectileFX.generated.h"

class UAkAudioEvent;
class UParticleSystem;

USTRUCT(BlueprintType)
struct FSwProjectileFX {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ReflectParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DeflectParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ReflectSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DeflectSFX;
    
    SWGAME_API FSwProjectileFX();
};

