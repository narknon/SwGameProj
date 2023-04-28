#pragma once
#include "CoreMinimal.h"
#include "SwQuicksandActiveEffect.generated.h"

class AActor;
class UChildActorComponent;
class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct SWGAME_API FSwQuicksandActiveEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* actorInQuicksand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* FXComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UChildActorComponent* ComponentForChildActorForSurfaceDeformation;
    
    FSwQuicksandActiveEffect();
};

